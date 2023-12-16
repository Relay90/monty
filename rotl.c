#include "monty.h"

/**
 * f_rotl - rotate stack element to the top
 * @head: first node of stack
 * @counter: line counter (unused)
 *
 * Return: none
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	(void)counter;
	if (*head == NULL || (*head)->next == NULL)
		return;

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	tmp->next->next = NULL;
	tmp->next->prev = tmp;
}

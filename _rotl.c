#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top by moving
 * the second element to the bottom.
 * @head: Pointer to the stack's head
 * @line_number: Line number in the file being processed
 */
void f_rotl(stack_t **head, unsigned int line_number)
{
	stack_t *tmp, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	aux = (*head)->next;  /* Points to the second element */
	aux->prev = NULL;

	tmp = aux;
	while (tmp->next != NULL)
	{
		/* Traverse to find the last node in the stack */
		tmp = tmp->next;
	}

	tmp->next = *head;
	(*head)->prev = tmp;
	(*head)->next = NULL;

	*head = aux;
	aux->prev = NULL;
}

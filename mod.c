#include "monty.h"

/**
 * f_mod - compute modulos of two elements in stack
 * @head: pointer to pointer to first node
 * @counter: line counter
 *
 * Return: none
 */
void f_mod(stack_t **head, unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n %= (*head)->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}


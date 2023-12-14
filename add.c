#include "monty.h"

/**
 * f_add - add first 2 elements of the stack
 * @head: pointer to pointer to first node
 * @counter: line counter
 *
 * Return: none
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int sum;

	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	h = *head;
	sum = h->n + h->next->n;
	h->next->n = sum;
	*head = h->next;
	free(h);
}

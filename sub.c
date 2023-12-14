#include "monty.h"

/**
 * f_sub - subtract 2 elements of the stack
 * @head: pointer to pointer to first node
 * @counter: line counter
 *
 * Return: none
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	int diff;

	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	diff = temp->next->n - temp->n;
	temp->next->n = diff;
	*head = temp->next;
	free(temp);
}

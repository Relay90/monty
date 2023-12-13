#include "monty.h"

/**
 * f_pop - Removes the top element from the stack.
 * @head: Pointer to the head of the stack.
 * @line_number: Line number in the Monty file being executed.
 */
void f_pop(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
	}

	stack_t *temp = *head;
	*head = (*head)->next;
	free(temp);
}

#include "monty.h"

/**
 * f_pint - Prints the value of the top element in the stack.
 * @head: Pointer to the head of the stack.
 * @line_number: Line number in the Monty file being executed.
 */
void f_pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
			exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}

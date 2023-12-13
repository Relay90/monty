#include "monty.h"

/**
 * f_div - Divides the second element by the top element of the stack.
 * @stack: Pointer to the head of the stack
 * @line_number: Line number in the file where the operation occurs
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	int divisor = (*stack)->n;
	int dividend = (*stack)->next->n;
	int len = 0;
	stack_t *temp = *stack;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	if (len < 2)
	{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
	/* Add memory cleanup if necessary */
	exit(EXIT_FAILURE);
	}

	if (divisor == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		/* Add memory cleanup if necessary */
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = dividend / divisor;

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}

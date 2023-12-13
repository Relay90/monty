#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of a stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty file being executed.
 */
void f_mul(stack_t **stack, unsigned int line_number)
{
	int len = 0;
	stack_t *temp = *stack;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	if (len < 2)
	{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	int multiplier = (*stack)->n;
	int multiplicand = (*stack)->next->n;

	(*stack)->next->n = multiplicand * multiplier;

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}

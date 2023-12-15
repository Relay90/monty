#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack without removing it
 * @head: Double pointer to the top of the stack
 * @counter: Line number in the Monty bytecode file
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}

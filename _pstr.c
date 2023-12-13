#include "monty.h"

/**
 * f_pstr - Prints the characters represented by ASCII
 * values stored in the stack.
 * @head: Pointer to the head of the stack.
 * @line_number: Line number in the Monty file being executed.
 *
 * Return: no return
 */
void f_pstr(stack_t **head, unsigned int line_number)
{
	stack_t *h = *head;

	(void)line_number;

	while (h != NULL && h->n > 0 && h->n <= 127)
	{
		if (h->n == 0 || h->n > 127)
			break;

		printf("%c", h->n);
		h = h->next;
	}

	printf("\n");
}

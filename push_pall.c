#include "monty.h"
#include <limits.h>

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
/**
 * f_push - Pushes an element onto the stack or queue
 * @stack: Pointer to the head of the stack
 * @line_number: Line number in the Monty byte code file
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	int i;
	int value = 0;

	if (bus.arg == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	i = 0;

	while (bus.arg[i])
	{
		if (!isdigit(bus.arg[i]) && bus.arg[i] != '-')
		{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
		}
		i++;
	}

	value = atoi(bus.arg);

	if ((value == 0 && bus.arg[0] != '0') || (value == INT_MIN))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (bus.lifo)
		addnode(stack, value);
	else
		addqueue(stack, value);
}

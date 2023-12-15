#include "monty.h"

/**
 * f_push - Pushes an integer onto a stack or queue based on a condition.
 * @head: Pointer to the head of the stack or queue.
 * @counter: Line number or counter for error reporting.
 */
void f_push(stack_t **head, unsigned int counter)
{
	int i = 0, flag = 0;

	if (!bus.arg || (bus.arg[0] == '-' && ++i) || !isdigit(bus.arg[i]))
		flag = 1;
	else
	{
		for (; bus.arg[i] != '\0'; i++)
		{
			if (!isdigit(bus.arg[i]))
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(bus.arg);
	bus.lifi == 0 ? addnode(head, i) : addqueue(head, i);
}

/**
 * f_pall - Prints the elements of a stack.
 * @head: Pointer to the head of the stack.
 * @counter: Line number or counter for identification.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	printf("L%d: ", counter); /* Print the line number */

	if (!h)
	{
		printf("Stack is empty\n");
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}


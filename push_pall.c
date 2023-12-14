#include "monty.h"

/**
 * f_pall - print everything in stack
 * @head: pointer to pointer of first node
 * @counter: line counter
 *
 * Return: none
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	printf("L%d: ", counter); /* Print the line number */
	if (h == NULL)
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

#include "monty.h"

/**
 * f_push - function that adds node to the stack
 * @head: double head pointer to the stack
 * @counter: line count
 *
 * Return: nothing
 */
void f_push(stack_t **head, unsigned int counter)
{
	int i, m = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			m++;
		for (; bus.arg[m] != '\0'; m++)
		{
			if (bus.arg[m] > 57 || bus.arg[m] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}

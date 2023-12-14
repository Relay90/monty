#include "monty.h"

/**
 * f_pop - Removes the top node from the stack
 * @head: Pointer to pointer of first node
 * @counter: Line counter
 *
 * Return: None
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = temp->next;
	free(temp);
}


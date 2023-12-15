#include "monty.h"

/**
 * f_pop - Pops an element from either a stack or a queue based on the mode
 * @head: Pointer to a pointer to the stack/queue structure
 * @counter: Unused (seems intended for error reporting)
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp = *head;

	if (!temp)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	*head = (bus.lifi == 0) ? temp->next : *head;

	if (*head)
		(*head)->prev = (bus.lifi == 0) ? NULL : (*head)->prev;

	free(temp);
}


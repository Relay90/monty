#include "monty.h"

/**
 * f_stack - Deallocates memory occupied by a doubly linked list.
 * @head: Pointer to the head of the stack.
 */
void f_stack(stack_t **head)
{
	stack_t *aux = *head;

	while (aux != NULL)
	{
		*head = aux->next;
		free(aux);
		aux = *head;
	}
}

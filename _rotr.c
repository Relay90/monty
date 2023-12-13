#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom by moving the top
 * element to the end.
 * @head: Pointer to the stack's head
 * @line_number: Line number in the file being processed
 */
void f_rotr(stack_t **head, unsigned int line_number)
{
	stack_t *copy, *last_node;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	copy = *head;  /* Points to the stack head */

	while (copy->next != NULL)
	{
		copy = copy->next;
	}

	last_node = copy;  /* Last node is found */

	last_node->next = *head;
	copy->prev->next = NULL;
	(*head)->prev = last_node;
	last_node->prev = NULL;

	*head = last_node;  /* The last node becomes the new head */
}

#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @stack: Pointer to the head of the stack
 * @line_number: Line number in the file where the operation occurs
 */
void f_add(stack_t **stack, unsigned int line_number)
{
	int sum = (*stack)->n + (*stack)->next->n;
	int len = 0;
	stack_t *temp = *stack;

	/* Counting the number of elements in the stack */
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	if (len < 2)
	{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	/* Add memory cleanup if necessary */
	exit(EXIT_FAILURE);
	}
	(*stack)->next->n = sum;

	temp = (*stack)->next;
	(*stack)->next = temp->next;
	free(temp);
}

/**
 * addnode - Adds a new node with the given integer to the head of the stack.
 * @head: Pointer to the head of the stack
 * @n: Integer value to be stored in the new node
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *aux = *head;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = aux;
	new_node->prev = NULL;

	if (aux != NULL)
	{
		aux->prev = new_node;
	}

	*head = new_node;
}

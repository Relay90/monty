#include "monty.h"

/**
 * f_queue - print first node of queue
 * @head: first node of queue (unused)
 * @counter: line counter (unused)
 *
 * Return: none
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;

	bus.lifi = 1;
}

/**
 * addqueue - add node to tail of queue
 * @n: new value
 * @head: head of the queue
 *
 * Return: none
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf(stderr, "Error: Unable to allocate memory\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
}

/**
 * free_stack - freedoubly linked list
 * @head: first node of stack
 * Return: none
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

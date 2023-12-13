#include "monty.h"

/**
 * f_nop - No-operation opcode function.
 * @head: Pointer to the head of the stack.
 * @counter: Line number in the Monty file being executed.
 */
void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
	bus.lifi = 0;
}

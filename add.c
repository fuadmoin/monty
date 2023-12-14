#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
int sum;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
sum = (*stack)->n + (*stack)->next->n;
pop(stack, line_number);
(*stack)->n = sum;
}

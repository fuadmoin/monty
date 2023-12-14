#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: pointer to the stack
 * @line_number: line number
 * @n: value of the new node
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number, const int n)
{
stack_t *new;

new = malloc(sizeof(stack_t));
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new->n = n;
new->prev = NULL;
new->next = *stack;
if (*stack != NULL)
(*stack)->prev = new;
*stack = new;
}

/**
 * pall - prints all the values on the stack
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;

tmp = *stack;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
}

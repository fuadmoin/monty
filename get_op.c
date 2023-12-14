#include "monty.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument
 * Return: pointer to the function that corresponds to the operator
 */
void (*get_op_func(char *s))(stack_t **, unsigned int)
{
instruction_t op[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{NULL, NULL}
};
int i = 0;

while (op[i].opcode)
{
if (strcmp(s, op[i].opcode) == 0)
return (op[i].f);
i++;
}
return (NULL);
}

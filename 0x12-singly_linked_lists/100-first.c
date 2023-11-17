#include <stdio.h>
#include "lists.h"

/**
 * execute_first - executes before the main fn
 *
 * Return: void
 */
void execute_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
__attribute__((constructor)) void before_main(void)
{
	execute_first();
}

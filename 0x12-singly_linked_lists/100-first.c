#include <stdio.h>

void jump_d_gun(void) __attribute__((constructor));

/**
 * jump_d_gun - before main starts
 * Description: A race to win
 * Return: returns nothing
 */

void jump_d_gun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

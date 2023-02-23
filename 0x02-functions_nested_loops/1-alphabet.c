#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - display alphabet
 * Return: 0 if correct
 */
void print_alphabet(void)
{
	int i = 0;
	while ( i <= 25, i++)
	       putchar(97 + i);
	return (0);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - display alphabet
 * Return: 0 if correct
 */
void print_alphabet(void)
{
	int i;
	i = 97;
	do
	{
		putchar(i);
		i++;
	}
	while(i <= 122);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	void print_alphabet();
	return (0);
}

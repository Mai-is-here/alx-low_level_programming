#include <stdio.h>
#include <ctype.h>

/**
 * isupper - check whether the character is uppercase or lowercase
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	int i;
	i = 65;

	for(i < 91; i++;)
	{
		return (1);
	}
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

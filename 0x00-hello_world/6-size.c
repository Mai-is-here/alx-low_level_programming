#include <stdio.h>

/**
 * main - print out the size of various types on computer
 * Return: 0 if code runs without errors
 */
int main(void)
{
	fprintf("Size of a char:%2d byte(s)\n", sizeof(char), stderr);
	fprintf("Size of an int:%2d byte(s)\n", sizeof(int), stderr);
	fprintf("Size of a long int:%2d byte(s)\n", sizeof(long int), stderr);
	fprintf("Size of a long long int:%2d byte(s)\n", sizeof(long long int), stderr);
	fprintf("Size of a float:%2d byte(s)", sizeof(float), stderr);
	return (0);
}

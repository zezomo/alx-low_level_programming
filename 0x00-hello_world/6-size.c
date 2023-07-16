#include <stdio.h>

/**
 * main - entry point
 *
 * Descrubtion: using Size function
 *
 * Return: Always 0
*/

int main(void)
{
	printf("Size of a char: %lu byte\n",sizeof(char));
	printf("Size of a int: %lu byte\n",sizeof(int));
	printf("Size of a long int: %lu byte\n",sizeof(long int));
	printf("Size of a long long int: %lu byte\n",sizeof(long long int));
	printf("Size of a float: %lu byte\n",sizeof(float));
	return (0);
}

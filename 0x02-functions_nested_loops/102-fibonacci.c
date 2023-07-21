#include "main.h"

/**
 * main - check the code.
 * dgfwfgnawn;enwfoabnfawbnfbowe4rfoawrjfbkljabsjklfobaf
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	int f1, f2, sum;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%d", sum);

		f1 = f2;
		f2 = sum;

		if (c == 50)
			printf("\n");
		else
			printf(". ");
	}
	return (0);

}

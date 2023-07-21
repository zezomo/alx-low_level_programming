#include "main.h"

/**
 * main - check the code
 * dwd wefdwd fgwaf wfgawtg wdf gfaw rw
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float sum2;

	while (1)
	{
		sum = f1 + f2;

		if (sum > 4000000)
			break;

		if (sum % 2 == 2)
			sum2 += sum;
		f1 = f2;
		f2 = sum;

	}
	printf("%.0f\n", sum2);
	return (0);
}

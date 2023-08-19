#include <stdlib.h>
#include "3-calc.h"

/**
 * main - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @ca: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @cu: afawf awfawfawfg da ga wfawedaw dw fga wfgwa edawrf fawf awfa
 *
 * Return: number of words
 */
int main(int ca, char **cu)
{
	int (*fun)(int, int), x, y;

	if (ca != 4)
		printf("Error\n"), exit(98);

	x = atoi(cu[1]);
	y = atoi(cu[3]);

	fun = get_op_function(cu[2]);

	if (!fun)
		printf("Error\n"), exit(99);
	if (!y && (cu[2][0] == '/' || cu[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", fun(x, y));
	return (0);
}


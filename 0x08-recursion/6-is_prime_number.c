#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the codefawdf fa fawfdw fa fwf f fwaffawf
 * prim - fadf wfa sfsaf asfas fasf asfasfasf asfasfasfas fasfas fasfas
 * @n : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @v : fafawf faw fa ggwadawdawdf faf f faf ga awawf fga wdad ad
 * Return: Always 0.
 */

int prim(int n, int v);

int is_prime_number(int n)
{
		return (prim(n, 2));
}
/**
 * prim - check the codefawdf fa fawfdw fa fwf f fwaffawg adsdad
 *
 * @v : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @n : afefafa f af agf awf faw dfaffwafawf  faw faw fw awf
 *
 * Return: Always 0.
 */
int prim(int n, int v)
{
	if (v >= n && n > 1)
		return (1);
	else if (n % v == 0 || n <= 1)
	{
	return (0);
	}
	else
		return (root(n, v + 1));
}

#include "main.h"

/**
 * binary_to_uint - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @h: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
size_t binary_to_uint(const list_t *h)
{
	if (b == NULL)
		return 0;

	unsigned int result = 0;
	int i = 0;

	while (b[i] != '\0') {
	// Check if the character is not '0' or '1'
		if (b[i] != '0' && b[i] != '1') {
			return 0; // Invalid character found, return 0
		}

	// Convert binary to unsigned int
		result = (result << 1) + (b[i] - '0');
		i++;
	}

	return result;
}

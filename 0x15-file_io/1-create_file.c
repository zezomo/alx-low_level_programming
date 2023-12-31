#include "main.h"

/**
 * create_file - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @filename : vohewivbeivbe ieheiybw cbiywebcw ibeyvbweivy ibveyib
 *
 * @text_content : dveneiv nciunwiucn cniucnwiuncw vnwcinwi wi cwwnc wcn
 *
 * Return: number of words
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor =
		open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t bytes_written =
		write(file_descriptor, text_content, strlen(text_content));

	if (filename == NULL)
		return (-1);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}



#include "main.h"

/**
 * read_textfile - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @filename : vohewivbeivbe ieheiybw cbiywebcw ibeyvbweivy ibveyib
 *
 * @letters : dveneiv nciunwiucn cniucnwiuncw vnwcinwi wi cwwnc wcn
 *
 * Return: number of words
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written = 0;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * max_chars);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	while ((bytes_read = read(file_descriptor, buffer, max_chars)) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1)
		{
			free(buffer);
			close(file_descriptor);
			return (0);
		}
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}


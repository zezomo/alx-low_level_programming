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
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t file_descriptor = open(filename, O_RDONLY);
	ssize_t total_read = 0;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);


	if (buffer == NULL)
		return (0);


	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	while ((bytes_read = read(file_descriptor, buffer, letters)) > 0)
	{
		ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			free(buffer);
			close(file_descriptor);
			return (0);
		}
		total_read += bytes_read;
	}

	free(buffer);
	close(file_descriptor);

	if (bytes_read == -1)
		return (0);

	return (total_read);
}

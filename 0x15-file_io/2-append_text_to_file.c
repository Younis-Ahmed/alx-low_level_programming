#include "main.h"

/**
 * len - string length
 * @s: string
 * Return: result
 */

int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 or -1 (int)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openfile;
	int content_len;

	if (!filename)
		return (-1);

	if (text_content)
		content_len = len(text_content);

	openfile = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	if (openfile == -1)
		return (-1);

	write(openfile, text_content, content_len);
	close(openfile);
	return (1);
}

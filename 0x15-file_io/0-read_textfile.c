#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Use to read text file of STDOUT
* @filename: the text file which is being read
* @letters: the no. of letters to be read
* Return: w as the no. of bytes read and printed and when the
* function fails or filename is NULL 0 is returned.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}

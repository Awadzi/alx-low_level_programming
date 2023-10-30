#include "main.h"

/**
* append_text_to_file - use to append text at the end off a file
* @filename: pointer to the name of the file
* @text_content: string that will be added to the end of the file
* Return: -1 if the function fails or the filename is NULL,
* and if the file does not exist then no write permission otherwise return 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}

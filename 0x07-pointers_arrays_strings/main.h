#ifndef main_h
#define main_h


char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);void swap_int(int *a, int *b);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);void print_rev(char *s);
char *_strpbrk(char *s, char *accept);void puts2(char *str);
char *_strstr(char *haystack, char *needle);void print_array(int *a, int n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif

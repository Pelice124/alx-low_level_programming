#ifndef MAIN_H
#define MAIN_H
/**
* This header file has all prototypes for the 0x    07. C- even more pointers
* _putchar - function
* @c: parameter
* Return: on success 1, on error -1
*/





char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int _putchar (char c);


#endif

#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area @dest
 * @dest: pointer to memory area to copy @src into
 * @src: source to copy from
 * @n: number of bytes
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}

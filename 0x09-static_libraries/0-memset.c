#include "main.h"

/**
*_memset - print _memset
*@s : parameter s
*@b :parameter b
*@n :parameter n
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

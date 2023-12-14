#include "main.h"
/**
 *_strcat - copy string.
 *@dest: char
 *@src: char
 *Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

/**
 * _strcmp - compare string
 * @s1: char1
 * @s2: char2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return ((int)s1[a] - s2[a]);
	}
	return (0);
}

/**
 * _strlen - copies string 
 * @s: A pointer
 * Return: char pointer to dest
 */

int _strlen(char *s)
{
	int ch = 0;

	while (*(s + ch) != '\0')
	{
		ch++;
	}

	return (ch);
}

/**
 *_strncmp - compares two strings.
 *@s1: string one
 *@s2: string two
 *@n: num of char
 * Return: diference
 */

size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}

/**
 * _strcpy - copies string
 * @dest: dest
 * @src: src
 *
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		++i;
	}
	*(dest + i) = *(src + i);

	return (dest);
}

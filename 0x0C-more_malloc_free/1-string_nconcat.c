#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes to concatenate from s1 to s2
 *
 * Return: Newly allocated memory which contains s1,
 * followed by the n bytes of s2 and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, len1;
	char *new_str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (!new_str)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[i] = s1[i];

	for (i = 0; i < n; i++)
		new_str[len1++] = s2[i];

	new_str[len1] = '\0';
	return (new_str);
}

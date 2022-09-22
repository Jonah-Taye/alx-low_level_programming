#include "main.h"
/**
 * rot13 - encrypts code
 * @s: Accepts the string
 *
 * Return: converted string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char encode1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encode2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; encode1[j]; j++)
		{
			if (s[i] == encode1[j])
			{
				s[i] = encode2[j];
				break;
			}
		}
	}
	return (s);
}

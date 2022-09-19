/**
 * _strlen - Finds the length of the string passed
 * @s: The string to be measured
 *
 * Return: Void
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; i != -1; i++)
	{
		if (s[i] == '\0')
			break;
		len++;
	}

	return (len);
}

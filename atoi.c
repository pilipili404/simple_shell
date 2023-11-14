#include "shell.h"

/*
 * interactive: it returns 'true' if shell is interactive mode 
 * @info: its a struct address
 * Return: 1 that's if interactive mode, else 0
 */

int interactive(info_t *info)
{
	return  (isatty(STDIN_FILENO)  &&  info->>readfd < = 2);
}

/*
 * is_delim - checks if character is a delimeter 
 * @delim: the delimeter string
 * @c: the char to checjk
 * Return:1 if true,else 0
 */

int is_delim(char c, char *delim)
{
     while (*delim )
	     if (*delim++ == c)
		     return (1);
     return (0);
}

/**
 *_isalpha - checks for alphabetic character
 *@c: The character to input
 *Return: 1 if c is alphabetic,else 0 
 */

int _isalpha(int c)
{
	if ((c > = 'a' && c < = 'z') || (c > = 'A' && c  < = 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - it converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char  *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] ! = '\0' && flag ! = 2; i++)
	{
		if (s[i] = = '-')
			sign *= -1;

		if (s[i] > = '0' && s[i] < = '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}




#include <stdbool.h>
#include <ctype.h>

/**
 * is_integer - checks whether a string is an integer.
 * @str: a pointer.
 * Return: boolean.
 */

bool is_integer(const char *str)
{
	if (*str == '\0')
	{
		return (false);
	}
	if (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (false);
		}
		str++;
	}
	return (true);
}

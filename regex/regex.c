#include "regex.h"

/**
 * match_star - handles the * operator
 * @c: character before *
 * @str: string to scan
 * @pattern: remaining pattern after *
 *
 * Return: 1 if matched, otherwise 0
 */
int match_star(char c, char const *str, char const *pattern)
{
	if (regex_match(str, pattern))
		return (1);

	if (*str != '\0' && (c == '.' || *str == c))
		return (match_star(c, str + 1, pattern));

	return (0);
}

/**
 * regex_match - checks whether a given pattern matches a given string
 * @str: string to scan
 * @pattern: regular expression
 *
 * Return: 1 if the pattern matches the string, otherwise 0
 */
int regex_match(char const *str, char const *pattern)
{
	if (*pattern == '\0')
		return (*str == '\0');

	if (*(pattern + 1) == '*')
		return (match_star(*pattern, str, pattern + 2));

	if (*str != '\0' && (*pattern == '.' || *pattern == *str))
		return (regex_match(str + 1, pattern + 1));

	return (0);
}

#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - Compute string length
 * @s: input string
 *
 * Return: length as int
 */
int _strlen(char *s)
{
	int n = 0;

	while (s && s[n])
		n++;
	return (n);
}

/**
 * _isdigit_str - Check if a string contains only decimal digits
 * @s: input string
 *
 * Return: 1 if only digits and at least one char, 0 otherwise
 */
int _isdigit_str(char *s)
{
	int i = 0;

	if (!s || !s[0])
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * print_str - Print a C string using _putchar
 * @s: string to print
 *
 * Return: void
 */
void print_str(char *s)
{
	int i = 0;

	while (s && s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * multiply - Multiply two positive integer strings and print result
 * @num1: first factor (digits only)
 * @num2: second factor (digits only)
 *
 * Description:
 * Uses grade-school O(n*m) multiplication into an int array of size
 * len1 + len2. Prints the resulting digits with _putchar and a newline.
 *
 * Return: void (exits with 98 on allocation error)
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int total = len1 + len2;
	int i, j, k, carry, n1, n2, sum;
	int *res = NULL;

	res = malloc(sizeof(int) * total);
	if (!res)
	{
		print_str("Error\n");
		exit(98);
	}
	for (i = 0; i < total; i++)
		res[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + res[i + j + 1] + carry;
			res[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		res[i] += carry;
	}

	/* skip leading zeros (but leave one zero if all zeros) */
	k = 0;
	while (k < total - 1 && res[k] == 0)
		k++;

	for (; k < total; k++)
		_putchar(res[k] + '0');
	_putchar('\n');

	free(res);
}

/**
 * main - Entry point: multiplies two positive numbers from argv
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits(98) on error per spec
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !_isdigit_str(argv[1]) || !_isdigit_str(argv[2]))
	{
		print_str("Error\n");
		exit(98);
	}

	/* quick zero-fastpath is optional; core algo already handles it */
	multiply(argv[1], argv[2]);
	return (0);
}

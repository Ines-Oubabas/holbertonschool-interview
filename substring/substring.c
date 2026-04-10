#include <stdlib.h>
#include "substring.h"

/**
 * str_len - returns length of a string
 * @s: string
 *
 * Return: length
 */
int str_len(char const *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * same_word - compares two strings on len characters
 * @s1: first string
 * @s2: second string
 * @len: number of characters to compare
 *
 * Return: 1 if identical, 0 otherwise
 */
int same_word(char const *s1, char const *s2, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
			return (0);
	}
	return (1);
}

/**
 * find_word_index - finds an unused matching word
 * @sub: substring to compare
 * @words: array of words
 * @used: array marking used words
 * @nb_words: number of words
 * @word_len: length of each word
 *
 * Return: index of matching word, -1 otherwise
 */
int find_word_index(char const *sub, char const **words, int *used,
		int nb_words, int word_len)
{
	int i;

	for (i = 0; i < nb_words; i++)
	{
		if (!used[i] && same_word(sub, words[i], word_len))
			return (i);
	}
	return (-1);
}

/**
 * is_valid_at - checks if concatenation is valid at given index
 * @s: input string
 * @words: array of words
 * @nb_words: number of words
 * @start: starting index in s
 * @word_len: length of each word
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_at(char const *s, char const **words, int nb_words,
		int start, int word_len)
{
	int *used;
	int i, idx;

	used = malloc(sizeof(int) * nb_words);
	if (used == NULL)
		return (0);

	for (i = 0; i < nb_words; i++)
		used[i] = 0;

	for (i = 0; i < nb_words; i++)
	{
		idx = find_word_index(s + start + (i * word_len), words, used,
				nb_words, word_len);
		if (idx == -1)
		{
			free(used);
			return (0);
		}
		used[idx] = 1;
	}

	free(used);
	return (1);
}

/**
 * find_substring - finds all substrings containing concatenated words
 * @s: string to scan
 * @words: array of words
 * @nb_words: number of words
 * @n: stores number of found indices
 *
 * Return: allocated array of indices, or NULL
 */
int *find_substring(char const *s, char const **words, int nb_words, int *n)
{
	int s_len, word_len, total_len, i, count = 0;
	int *result;

	*n = 0;
	if (s == NULL || words == NULL || nb_words <= 0 || words[0] == NULL)
		return (NULL);

	word_len = str_len(words[0]);
	if (word_len == 0)
		return (NULL);

	s_len = str_len(s);
	total_len = word_len * nb_words;

	if (s_len < total_len)
		return (NULL);

	result = malloc(sizeof(int) * (s_len - total_len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i <= s_len - total_len; i++)
	{
		if (is_valid_at(s, words, nb_words, i, word_len))
			result[count++] = i;
	}

	if (count == 0)
	{
		free(result);
		return (NULL);
	}

	*n = count;
	return (result);
}

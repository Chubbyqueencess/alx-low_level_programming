/*
 * file: 0-isupper.c
 * Auth: Ejeh Abigail
 */

#include "main.h"

/**
 * _isupper - checks for uppercase characters.
 * @c: The characters to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

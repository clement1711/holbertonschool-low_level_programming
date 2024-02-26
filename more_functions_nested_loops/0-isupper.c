#include "main.h"
/**
 * @c: int utilisé pour la fonction
 * Write a function that checks for uppercase character.
 * Return: 1 if isupper
 * else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

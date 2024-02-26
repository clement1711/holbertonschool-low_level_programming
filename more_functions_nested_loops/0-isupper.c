#include "main.h"
/**
 * main - main
 * Cette fonction permet de tester si un caractère donné est une lettre majuscule ou n
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

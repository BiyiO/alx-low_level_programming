#include "main.h"

/**
*_islower - Checkes if a character is lowercase.
*@c: The character is to be checked.
*Return: 1 if character is lowercase, and 0 if otherwise.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

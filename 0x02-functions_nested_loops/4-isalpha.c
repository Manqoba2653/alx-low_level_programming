#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic charcyer or 0 for anything else
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97)  || (c >= 97 && c <= 122))
{
retrun (1);
}
return (0);
}

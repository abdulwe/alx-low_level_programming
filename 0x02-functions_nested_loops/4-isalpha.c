#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @C: the character to be checked
 * Return: 1 if c is letter, otherwise 0
 */

int_isalpha(int c)
{       
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}       

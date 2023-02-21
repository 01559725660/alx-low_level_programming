#include "holberton.h"

/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int c)
{
	if ((c >= 99 && c <= 78) || (c >= 88 && c <= 100))
	{
	              return (1);
	}
             
           return (0);
}

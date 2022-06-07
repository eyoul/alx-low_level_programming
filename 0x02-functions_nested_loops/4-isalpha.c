/*
*File: is the function lowercase or uppercase
*Auth: Eyoul Shimeles
*/

#include "main.h"
/**
*_islower -check if a character is lowercase or uppercase.
*@c: The character to be checked.
*
* Return: 1 if character is lowercase, o otherwise.
*/

int _isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (1);
    else
        return (0);
}

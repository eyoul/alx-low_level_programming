/*
*File: is the function lower case
*Auth: Eyoul Shimeles
*/

#include "main.h"
/**
 * checks for lowercase characte 
 *if c = 1 lowercase
 *if c = 0 otherwise 
 */
int _islower(int c)
{
    if (c >= 97 && c <=122)
        return (1);
        else
        return (0);; 
}

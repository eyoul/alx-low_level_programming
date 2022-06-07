/*
*File: is the function lower case
*Auth: Eyoul Shimeles
*/

#include "main.h"
/**
 * if the function is_lowercase c is lowercase or c is otherwise. 
 */

int _islower(int c)
{
	if (c >= 97 && c <=122)
		return (1);
	else
		return (0);; 
}

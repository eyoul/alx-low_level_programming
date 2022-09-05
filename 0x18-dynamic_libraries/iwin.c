#include <unistd.h>
#include <string.h>

int rand()
{
	static int ct = -1;

	ct++;
	if (ct == 0)
		return 9;
	if (ct == 1)
		return 8;
	if (ct == 2)
		return 10;
	if (ct == 3)
		return 24;
	if (ct == 4)
		return 75;
	if (ct == 5)
		return 9;
	return ct * ct % 30000;
}

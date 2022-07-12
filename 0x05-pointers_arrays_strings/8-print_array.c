#include "main.h"
/**
*	print_array - prints n times the elements of an array
*	@a: the pointer to the elements
*	@n: times to the print elements
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printtf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}

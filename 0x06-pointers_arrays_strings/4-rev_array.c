#include "main.h"
/**
*reverse_array - reverses the content of an array of integers
*
*@a: parameter array
*
*@n: parameter int
*/
void reverse_array(int *a, int n)
{
	int ary, rev, count, temp;

	count = n;
	rev = n - 1;
	for (ary = 0; ary < n; ary++)
	{
		if (count > 1)
		{
			temp = *(a + ary);
			*(a + ary) = *(a + rev);
			*(a + rev) = temp;
			rev--;
			count -= 2;
		}
		else
		{
			break;
		}
	}
}

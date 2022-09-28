#include "main.h"
/**
*sqrtfnc - squareroot function
*@i: integer
*@n: square parameter
*Return: squareroot of n
*/
int sqrtfnc(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i > n / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrtfnc(++i, n));
	}
}
/**
*_sqrt_recursion - call sqrtfnc
*@n: square integer
*Return: squareroot of n
*/
int _sqrt_recursion(int n)
{
	return (sqrtfnc(1, n));
}

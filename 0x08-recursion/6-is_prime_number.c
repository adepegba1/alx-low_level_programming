#include "main.h"

/**
  *primeCheck - checking if the number is prime number
  *
  *@i: factor check
  *
  *@j: possible prime
  *
  *Return: 1 if prime and 0 otherwise
  */
int primeCheck(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (primeCheck(i + 1, j));
}

/**
  *is_prime_number - prime number
  *
  *@n: value to check
  *
  *Return
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (primeCheck(2, n));
}

#include <stdio.h>

int main (void)
{
	int number, right_digit;

	printf ("Enter your number.\n");
	scanf ("%i", &number);

	if (number < 0)
	{
		number *= -1;
		printf ("-");
	}

	do
	{
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
	}
	while (number != 0);

	printf ("\n");
	return 0;
}

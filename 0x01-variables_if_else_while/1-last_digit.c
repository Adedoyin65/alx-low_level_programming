#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", n);
	last_digit = n % 10;
	printf("Last digit of" n "is");
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is zero\n");
	}
	else if (last_digit < 6 && !(0))
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}

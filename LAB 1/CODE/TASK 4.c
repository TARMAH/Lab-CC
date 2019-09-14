#include <stdio.h>

int main()
{
	int a, s = 0, q, c;

	printf("Enter a +ve no. less than 1000: \n");
	scanf("%d", &a);
	q = a;

	if (q < 1 || q > 999)
		printf("Entered a number out of range\n");
	else {
		s += q % 10;
		q /= 10;
		s += q % 10;
		q /= 10;
		s += q % 10;
		printf("Sum of the digits of %d is %d\n", a, s);
	}
	return 0;
}

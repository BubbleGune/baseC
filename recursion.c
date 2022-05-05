#include <stdio.h>

int factorial(int n);

int main()
{
	int fact = 1, n = 0;
	puts("Enter a number: ");
	scanf("%d", &n);

	while(n >= 1)
	{
		fact = n * fact;
		n--;
	}
	printf("factorial is equal: %d\n", fact);
	return 0;
}
int factorial(int n)
{
	if(n == 1) return 1;
	return n * factorial(n-1);
}

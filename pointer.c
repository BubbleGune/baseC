#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Swap(int *a, int *b);

int main()
{
	int a = 10, c = 3;
	int *b = &a;
	
	*b = 15;
	printf("a = %d\t", a);
	printf("b = %d\n", *b);
	printf("&a = %p\t", &a);
	printf("&b = %p\n", b);

	printf("a - %d\tc - %d\tb - %d\n", a, c, *b);
	Swap(&a, &c);
	printf("a - %d\tc - %d\tb - %d\n\v", a, c, *b);

	int *d;
	int length = 0;
	puts("Enter length: ");
	scanf("%d", &length);
	
	d = malloc(length * sizeof(int));
	for (int i = 0; i < length; i++)
		d[i] = i;

	for (int i = 0; i < length; i++)
		printf("d[%d] = %d\n", i, d[i]);
	putchar('\0');
	free(d);
	return 0;
}
void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;	
}

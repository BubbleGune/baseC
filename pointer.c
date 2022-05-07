#include <stdio.h>
#include <string.h>

int main()
{
	int a = 10;
	int *b = &a;
	
	printf("a = %d\t", a);
	printf("b = %d\n", *b);
	printf("&a = %p\t", &a);
	printf("&b = %p\n", b);
	return 0;
}

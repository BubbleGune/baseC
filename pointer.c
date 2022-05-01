#include <stdio.h>
#include <string.h>

#define SIZE 20

void GetPointer();
void PrintStr(char *str);
int main()
{
	char str[SIZE] = { "I am  learn prog"};
	char *pStr[SIZE];
	for (int i = 0; i < SIZE; i++){
		pStr[i] = &str[i];
		printf("%s", pStr[i]);
	}
	putchar('\n');
	return 0;
}

void GetPointer()
{
	int number = 10;
	int *pNum = &number;
	printf("%p\t%d\n", pNum, *pNum);

	char name[] = "myname";
	char *pName = name;
	
	// string is cannot be change, but with pointer...
	for(int i = 0; i < strlen(name); i++){
		fprintf(stdout, "%c", *pName++);
		if (*pName == 'a') *pName = 'A';
	}	
	putchar('\n');
}
void PrintArInt(int *ar, int n)
{
	for (int i = 0; i < n; i++){
		printf("%d\t", ar[i]);
	}
	printf("\n");
}
void PrintStr(char *str)
{
	while (*str != '\0'){
		fprintf(stdout, "%c", *str);		
		*str++;
	}	
}

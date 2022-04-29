#include <stdio.h>
#include <string.h>

#define SIZE 20

void GetPointer();
void PrintStr(char *str);
int main()
{
	char str[SIZE] = { "I am  learn prog"};
	char *p_str[SIZE];
	for (int i = 0; i < SIZE; i++){
		p_str[i] = &str[i];
		printf("%s", p_str[i]);
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
	char *p_name = name;
	
	// string is cannot be change, but with pointer...
	for(int i = 0; i < strlen(name); i++){
		fprintf(stdout, "%c", *p_name++);
		if (*p_name == 'a') *p_name = 'A';
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

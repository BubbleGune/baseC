#include <stdio.h>
#include <string.h>

void Scanf();
void Fscanf();
void Fgets(char str[]);
void SymbolsOut();


int main()
{
	char str[30];
	int num;
// sprintf is buffer
	sprintf(str, "I am %d years and %c", 18, 'a');
	printf("%s\n", str);
	return 0;
}



void Fgets(char str[])
{
	fgets(str, 30, stdin);
	fputs(str, stdout);
	puts(str);
}
void Fscanf(char str[])
{
	fscanf(stdin, "%s", str); // until not space
	fscanf(stdin, "%[^\n]", str); // write all, not do so
	fprintf(stdout, "%s", str);
}
void Scanf(char str[], int num)
{
	scanf("%s\n", str);
	scanf("%d\n", &num);
	printf("%s\n", str);
	printf("%d\n", num);
}
void SymbolsOut()
{
	char a = 'a';
	for (; a <= 'm'; a++)
		printf("%c\t", a);
	a = 'A';
	a += 32;
	putchar(a);
}

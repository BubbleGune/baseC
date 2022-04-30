#include <stdio.h>
#include <string.h>

void GetCat(char str1[], char str2[]);
int GetPass();

int main()
{
	char str1[150] = "I am learn";
	char str2[] = " programming on C";
	char sub[] = "am";

	if (strstr(str1, sub) == NULL) puts("is not find");
	else printf("%p\n", strstr(str1, sub));

	GetPass();
	return 0;
}
void GetCat(char str1[], char str2[])
{
	strcat(str1, str2);
	puts(str1);
	strncat(str1, str2, 3);
	puts(str1);
	strncat(str1, str2+5, 7);
	puts(str1);
}
int GetPass()
{
	char pass[] = "password123";
	char input[15];
	do{
		scanf("%s\n", input);
	} while (strcmp(pass, input) != 0);
	return 0;
}

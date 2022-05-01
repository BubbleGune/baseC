#include <stdio.h>

void std();

int main()
{
	char str[20];
	FILE *fileRead = fopen("new.txt", "r");
	FILE *fileWrite = fopen("new.txt", "w");

	if (fileRead == NULL || fileWrite == NULL) fprintf(stderr, "Is not");
	int successfully = fread(str, 1, 20, fileRead);
	int successWrite = fwrite(str, 1, 20, fileWrite);
	printf("%d\n", successWrite);
	return 0;
}
void std()
{
	char str[10];
	FILE *file;
	file = fopen("new.txt", "w");
	if (file != NULL)
	{
		fgets(str, 10, file);
		puts(str);
		fprintf(file, "Hello my %d", 1);
		fputs(" main", file);
	} 
	else fprintf(stderr, "is not open file");
}

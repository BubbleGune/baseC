#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void std();

int main(int a, char *argv[])
{
	printf("%d\n", a);
	if (a == 2) exit(-1);

	int lower = atoi(argv[1]);
	int higher = atoi(argv[2]);
	for(int i = lower; i <= higher; i++)
		printf("%d\n", i);

	FILE *f_output = fopen("new.txt", "w");
	int in = 0;
	while(true){
		scanf("%d", &in);
		if(in == -1) break;
		else fprintf(f_output, "%d\n", in);
	}	
	fclose(f_output);

	FILE *f_input = fopen("new.txt", "r");
	int i = 0, l = 0, num[100];
	while(fscanf(f_input, "%d", &i) != EOF){
		printf("%d", i);
		num[l] = i;
		l++;
	}
	fclose(f_input);
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
void Example()
{
	char str[20];
	FILE *fileRead = fopen("new.txt", "r");
	FILE *fileWrite = fopen("new.txt", "w");

	if (fileRead == NULL || fileWrite == NULL) fprintf(stderr, "Is not");
	int successfully = fread(str, 1, 20, fileRead);
	int successWrite = fwrite(str, 1, 20, fileWrite);
	printf("%d\n", successWrite);
}

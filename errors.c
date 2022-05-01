#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
/*
	FILE *read = fopen("error.txt" , "r");
	if (read == NULL)
	{
		perror("ERROR");
	}
*/
	printf("%s\n", 	strerror());

	return 0;
}

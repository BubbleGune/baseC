#include <stdio.h>
#include <string.h>

void GetPointer();
void RemoveElemArr(int *a, int *pn, int x);

int main()
{
	int a[] = {1, 3, 4,4, 1,1, 6};
	int i, size;
	size = sizeof(a) / sizeof(*a);
	RemoveElemArr(a, &size, 4);

	for (int i = 0; i < size; i++)
		printf("%d\n", a[i]);
	return 0;
}

void RemoveElemArr(int *a, int *pn, int x)
{
	int i, j;
	for (int i = 0; i < *pn && a[i] != x; i++)
		for (int j = i+1; j < *pn; j++){
			 if(a[j] != x)
				a[i++] = a[j];	
		}	
	// new size of array
	*pn = j;
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

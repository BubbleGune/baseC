// is not working
#include <stdio.h>

typedef struct
{
	int a;
	char str[9];
} Abc;

struct Point
{
	Abc x;
	char *str;
} point;

//struct Point point;
//point y = {10, "asdf"};

int main()
{
	Point po = {10, "flaw"};	
}

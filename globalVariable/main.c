#include <stdio.h>

#define NUMBER 100

static char ch = 'A';

int main(){
	printf("%d\n", NUMBER);
	printf("%c\n", ch);
	extern char b;
	printf("%c\n", b);
//	extern char c;
//	printf("%c\n", c);
	extern char d;
	printf("%c\n", d);

}

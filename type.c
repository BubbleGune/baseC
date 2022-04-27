#include <stdio.h>

int main()
{
	// implicit transformation
	int two = 2;
	float a = 3 / (two + 0.0);
	printf("%1.2g\n", a);

	// explicit transformation
	float three = 3.7;
	printf("%1.4f\n", (double)two); 
	printf("%d\n", (int)three);

}

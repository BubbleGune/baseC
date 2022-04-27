#include <stdio.h>
#include <stdint.h>

void printArray(int n; uint8_t arr[n]);

int main()
{
	uint64_t num = 2384234;
	uint8_t *p = (uint8_t *)&num;
	
	uint8_t res[7];
	for (int i = 0; i < 7; i++){
		res[i] = p[i];
	}

	printArray(7, res);
}

void printArray(int n; uint8_t arr[n])
{
	for(int i = 0; i  < n; i++){
		printf("%d\n", arr[i]);
	}
}

#include <stdio.h>

void reverse (int array[], int length);

int main(){

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int length = 9;

	int arrTwo[] = { 6, 5, 4, 3, 2, 1 };

	reverse(arr, length);
	reverse(arrTwo, 6);

	for (int i = 0; i < length; i++){
		printf("arr[%d] - %d\n", i, arr[i]);
	}

	printf("\v");

	for (int i = 0; i < 6; i++){
		printf("arr[%d] - %d\n", i, arrTwo[i]);
	}
}

void reverse (int array[], int length)
{
	int temp = 0;

	for (int i = 0; i < (length / 2); i++){
		temp = array[i];
		array[i] = array[length - i -1];
		array[length - i - 1] = temp;
	}


}

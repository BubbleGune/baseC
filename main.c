#include <stdio.h>

int main(){

	int num[3][5] = { 0 };

	for (int i = 0; i < 3; i++){ 
		for (int j = 0; j < 5; j++){ 
			if (j == 3 || i == 2) printf("%i\t", 3);	
			else printf("%i\t", (i + 1) * (j + 1));
		}      
	}
	return 0;
}
 

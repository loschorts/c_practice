#include <stdio.h>

int main(){
	int c;
	int count = 0;
	int max = 20;
	int nlengths[max];

	for (int i = 0 ; i < max ; i++){
		nlengths[i] = 0;
	}

	while ((c=getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (count > max) {
				nlengths[max]++;
			} 
			else if (count != 0) {
				nlengths[count]++;
			}
			count = 0;
		} else {
			count++;
		}
	}

	for (int i = 1 ; i < max ; i++) {
		printf("%d (%d):\t", i, nlengths[i]);
		for (int j = 0 ; j < nlengths[i] ; j++) {
			printf("#");
		}
		printf("\n");
	}

}
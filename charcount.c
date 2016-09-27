#include <stdio.h>

int main(){
	int c, count = 32766;
	for (int count = 32766 ; getchar() != EOF ; count++) {
		printf("%d\t%d\n", count, c);
	}
}
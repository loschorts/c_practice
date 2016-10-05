#include <stdio.h>
#include <stdlib.h>


void printb(int a) {
	for (int i = (sizeof(a) * 8)- 1; i >= 0 ; i--){
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
}

unsigned setbits (unsigned x, int p, int n, unsigned y) {
	int left = x >> (p - (n - 1));
	int mask = ~(~0 << n);
	int left_mask = (left & mask);
	int result = (y << n) | left_mask;

	printf("x: %d, p: %d, n: %d, y: %d\n", x, p, n, y);
	printb(x);
	printb(left);
	printb(mask);
	printb(left_mask);
	printb(y);
	printb(result);
	return result;
}


int main(){
	int x = 1205;
	int y = 241;
	int p = 4;
	int n = 3;

	setbits(x,p,n,y);
}


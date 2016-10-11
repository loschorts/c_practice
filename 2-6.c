#include <stdio.h>
#include <stdlib.h>


void printb(int a) {
	for (int i = (sizeof(a) * 8)- 1; i >= 0 ; i--){
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
}

int highest_deg (unsigned x) {
	for (int p = (sizeof(x) * 8) ; p >= 0 ; p-- ) {
		if ((x >> p) == 1) {
			return p;
		}
	}
	return -1;
}

unsigned setbits (unsigned x, int p, int n, unsigned y) {
	int left = x >> (p - (n - 1));
	int mask = ~(~0 << n);
	int left_mask = (left & mask);
	int result = (y << n) | left_mask;

	printf("x: %d, p: %d, n: %d, y: %d\n", x, p, n, y);
	return result;
}

unsigned invert (unsigned x, int p, int n) {
	int mask = ~(~0 << n) << (p - (n - 1));
	int inverted = (mask & ~x);
	int scooped = (x & ~mask);

	return scooped | inverted;
}

unsigned rightrot (unsigned x, int n) {
	int seg_mask = ~((~0) << n);
	int segment = x & seg_mask;
	int p = highest_deg(x);
	segment = segment << (p - (n -1));

	int x_mask = seg_mask << (p - (n -1));
	// printb(x);
	// printb(x_mask);
	// printb(seg_mask);
	// printb(segment);
	return (segment | x >> n);
}


int main(){
	int x = 1203;
	int y = 241;
	int p = 4;
	int n = 3;

	// printb(setbits(x,p,n,y));
	// printb(invert(x, p, n));
	printb(x);
	printb(rightrot(x, n));
}


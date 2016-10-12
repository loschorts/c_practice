#include <stdio.h>

int main(){
	int p[10];
	*((char *)p + 4) = 4;
	printf("%d", p[1]);
}

	// int *p;
	// printf("%x: %x\n", &p, NULL);
	// for (int n = 0 ; n < 10 ; n++ ) {
	// 	printf("%p, %d\n", (p + n), *(p + n));
	// }
	// int *p;

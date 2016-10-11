#include <stdio.h>

int main(){
	int *p;
	printf("%x: %x\n", &p, NULL);
	for (int n = 0 ; n < 10 ; n++ ) {
		printf("%p, %d\n", p, *p);
		p++;
	}
}
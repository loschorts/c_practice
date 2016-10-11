#include <stdio.h>
#include <ctype.h>

void change(int *p){
	*p = 5;
}

void swap( int *a, int *b ){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	// int n = 2;

	// printf("%d\n", n);

	// change( &n );
	// printf("%d\n", n);

	int x = 3;
	int y = 5;
	printf("x: %d, y: %d\n", x, y);
	swap (&x, &y);
	printf("x: %d, y: %d\n", x, y);

}
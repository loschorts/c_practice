#include <stdio.h>

int power(int m, int n){
	int result = 1;
	for (int i = 0 ; i < n ; i++){
		result *= m;
	}
	return result;
}

int main(){
	printf("%d\n", power(3, 0));
	printf("%d\n", power(3, 1));
	printf("%d\n", power(3, 2));
	printf("%d\n", power(3, 3));
}
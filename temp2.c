#include <stdio.h>


float f_to_c(int f)
{
	return 5.0 / 9.0 * (f - 32);
}

int main(){
	printf("%3.2f\n", f_to_c(32));
	printf("%3.2f\n", f_to_c(0));
}
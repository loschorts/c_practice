#include <stdio.h>

int main()
{
	printf("temperature calculator\n");
	float fahr, celsius;
	int lower, upper, step;

	lower = -100;
	upper = 300;
	step = 20;
	fahr = lower;

	while (fahr <= upper){
		celsius = 5.0/9.0 * (fahr-32.0);
		printf("%3.0f\t%6.6f\n", fahr, celsius);
		fahr = fahr + step;
	}


}
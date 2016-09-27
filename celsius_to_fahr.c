#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define STEP 20

int main(){
	float celsius, fahr;
	float upper, lower, step;
	lower = -100;
	upper = 100;
	step = 20;

	celsius = lower;

	for (celsius = LOWER; celsius < UPPER; celsius += step){
		fahr = 9.0 / 5.0 * celsius + 32.0;
		printf("%3.0f\t%3.2f\n", celsius, fahr);
	}
}
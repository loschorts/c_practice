#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int c, state, lines, words, chars;
	lines = words = chars = 0;
	state = OUT;

	while ((c=getchar()) != EOF) {
		printf("%c", c);
		if (c == '\n'){
			lines++;
		}
		if (c == '\n' || c == '\t' || c == ' ') {
			if (state == IN) {
				words++;
			}
			state = OUT;
			if (c == '\t' || c == ' '){
				printf("\n");		
			}
		} else {
			state = IN;
		}

		chars++;

	}
	printf("%d\t%d\t%d\n", chars, words, lines);
}
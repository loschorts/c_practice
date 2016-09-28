#include <stdio.h>

int main(){
	int c;
	int tabs = 0;
	int newlines = 0;
	int blanks = 0;
	while ((c = getchar()) != EOF) {
		if (c = ' '){
			blanks++;
		}
		if (c = '\n'){
			newlines++;
		}
		if (c = '\t'){
			tabs++;
		}
	}
	printf("%d\t%d\t%d", tabs, newlines, blanks);
}
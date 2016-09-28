#include <stdio.h>

int main(){
	int c, last;
	while ((c = getchar()) != EOF){
		if (!(c == ' ' && last == ' ')){
			printf("%c", c);
			last = c;
		}
	}
}
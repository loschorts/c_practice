#include <stdio.h>

int main(){
	int c;
	while ((c=getchar()) != EOF) {
		if (c == '\n'){
			printf("\\n");
		} 
		else if (c == '\t'){
			printf("\\t");
		} 
		else if (c == '\\'){
			printf("\\\\");
		}
		else {
			printf("%c", c);
		}
	}
}
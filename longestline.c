#include <stdio.h>

#define MAXLINE 10

int mygetline(char line[], int lim);

void copy(char to[], char from[]);

int main(){
	int len;
	int max;
	char line[MAXLINE+1];
	char longest[MAXLINE+1];

	max = 0;
	while ((len = mygetline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}

	}
	if (max > 0) {
		printf("%s\t%d\n", longest, max);
	}
	return 0;
}

int mygetline(char line[], int lim) {
	int c;
	int i;
	for (i = 0 ; 
		((i < lim) && ((c=getchar()) != '\n')); 
		i++) {
		line[i] = c;
	}
	line[i+1] = '\0';
	return i;
}

void copy(char to[], char from[]){
	for (int i = 0 ; (to[i] = from[i]) != '\0' ; i++){
		;
	}
}
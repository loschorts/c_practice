#include <stdio.h>

#define MAXLINE 10

int mygetline(char line[], int lim);

void copy(char to[], char from[]);

void reverse(char str[], int length);

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
		printf("'%s'\t%d\n", longest, max);
	}
	return 0;
}

int mygetline(char line[], int lim) {
	int c;
	int i = 0;
	while ( (c=getchar()) != '\n') {
		if (i < lim) {
			line[i] = c;
		}
		i++;
	}
	
	line[i] = '\0';
	reverse(line, i);
	printf("reverse: %s\n", line);

	return i;
}

void reverse(char string[], int i){
	int a;
	for (int x = 0 ; x < i/2 ; x++) {
		a = string[x];
		string[x] = string[i - x - 1];
		string[i - x - 1] = a;
		printf("in process: %s\n", string);
	}
}

void copy(char to[], char from[]){
	for (int i = 0 ; (to[i] = from[i]) != '\0' ; i++)
		;
}
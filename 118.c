#include <stdio.h>

#define MAXLINE 10

int mygetline(char line[], int lim);

void copy(char to[], char from[]);

int trim(char str[], int length);

int main(){
	int len;
	int max;
	char line[MAXLINE+1];
	char longest[MAXLINE+1];

	max = 0;
	while ((len = mygetline(line, MAXLINE)) > 0) {
		printf("len: %d\n", len);
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
	i = trim(line, i);

	if (i > 8) {
		printf("%s\n", line);
	}

	return i;
}

int trim(char string[], int i){
	--i;
	for ( i=i ; string[i] == '\t' || string[i] == '\n'; i--)
		;
	string[i+1] = '\0';
	return i+1;
}

void copy(char to[], char from[]){
	for (int i = 0 ; (to[i] = from[i]) != '\0' ; i++)
		;
}
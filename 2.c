#include <stdio.h>

#define MAXLINE 10

int max = 0;
char line[MAXLINE];
char longest[MAXLINE];

int mygetline(void);
void copy(void);

int main(){
	int count;
	while ((count = mygetline()) != 0){
		if (count > max) {
			max = count;
			copy();
		}
	}
	printf("%d: %s\n", max, longest);
}

int mygetline(void){
	int c;
	int i;
	for (i = 0; (c = getchar()) != '\n'; i++){
		line[i] = c;
	}
	line[i] = '\0';
	return i;
}

void copy(void){
	int i;
	for (i = 0 ; line[i] != '\0'; i++) {
		longest[i] = line[i];
	}
	longest[i] = '\0';
}
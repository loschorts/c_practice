#include <stdio.h>

#define TABSPACE 3
#define MAXLEN 10
#define SUBCHAR '-'

int getinput(char input[]);
void detab(char in[], char out[]);
char tabbed[MAXLEN];
int i = 0;

int main(){

	int ntabs = getinput(tabbed);
	int tablen = i + (ntabs * (TABSPACE-1)) + 1;
	char dashed[tablen];
	detab(tabbed, dashed);
	printf("\n%s\n", dashed);

}

int getinput(char input[]) {
	int c;
	int tabs = 0;
	extern int i;
	for (i = 0; (c = getchar()) != '\n'; i++){
		if (c == '\t') {
			tabs++;
		}
		input[i] = c;
	}
	input[i] = '\0';
	return tabs;
}

void detab(char tabbed[], char dashed[]){
	int i;
	int j = 0;
	for ( i = 0 ; tabbed[i] != '\0' ; i++ ) {
		if (tabbed[i] == '\t') {
			for (int k = 0 ; k < TABSPACE ; k++) {				
				dashed[j] = SUBCHAR;
				j++;
			}
		} else {
			dashed[j] = tabbed[i];
			j++;
		}
	}
	dashed[j] = '\0';
}

#include <stdio.h>

#define MAX 1000

void getinput(char input[]);
void lint(char input[]);
char input[MAX];

int main(){
	getinput(input);
	lint(input);
}

void getinput(char input[]){
	int c, i;
	for (i = 0 ; (c = getchar()) != EOF ; i++) {
		input[i] = c;
	}
	input[i] = '\0';
}

void lint(char input[]) {
	int op, cp, ob, cb;
	op = cp = ob = cb = 0;

	for (int i = 0 ; input[i] != '\0' ; i++){
		if (input[i] == '(') {
			op++;
		}
		if (input[i] == ')') {
			cp++;
			if (cp != op) {
				printf("missing open paren\n");
			}
		}
		if (input[i] == '{') {
			ob++;
		}
		if (input[i] == '}') {
			cb++;
			if (cb != ob) {
				printf("missing open brace\n");
			}
		}
	}

	if (op > cp) {
		printf("unclosed paren\n");
	}
	if (ob > cb) {
		printf("unclosed brace\n");
	}
}
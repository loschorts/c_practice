#include <stdio.h>

#define MAX 10

static char ALLOCBUF[MAX];
static char *CUR = ALLOCBUF;

char *aalloc(int size);

int main(){

	char *buff = aalloc(1);
	char *word = aalloc(8);

	if (word) {	
		char *dup = word;

		for (int n = 0; n < 10; n++) {

			*dup = 'a' + n;

			printf("%p: %c\n", dup, *dup);

			(dup)++;
		}

		*dup = '\0';

		printf("%s\n", word);
	} 

}

char *aalloc(int size){
	if ((CUR - ALLOCBUF) + size <= MAX) {		
		char *start = CUR;
		CUR += size;
		return start;
	} else {
		printf("insufficient memory\n");
		return NULL;
	}
}
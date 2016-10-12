#include <stdio.h>

#define MAX 14

static char ALLOCBUF[MAX] = "DEFAULTDEFAULT";
static char *CUR = &ALLOCBUF[0];

char *aalloc(int size);

int main(){

	int wsize = 8;

	char *buff = aalloc(6);
	char *word = aalloc(wsize+1);
	word = aalloc(wsize);

	for (int n = 0 ; n < wsize ; n++) {
		*(word + n) = 'a' + n;
	}
	*(word + wsize) = '\0';

	printf("%s\n", word);
	printf("%s\n", ALLOCBUF);

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
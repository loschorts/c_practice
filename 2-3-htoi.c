#include <stdio.h>

int htoi(char hex[]);
int expo(int b, int e);

int main(){
	printf("%d", htoi("1f"));
}

int htoi(char hex[]){
	int len = 0;
	while (hex[len] != '\0') {
		len++;
	}
	int sum = 0;
	int val;
	for (int i = 0 ; hex[i] != '\0' ; i++) {
		if (hex[i] >= '0' && hex[i] <= '9') {
			val = hex[i] - '0';
		} else {
			val = hex[i] - 'a' + 10;
		}
		sum += val * expo(16, len-1);
		len--;
	}
	printf("%d\n", sum);
	return sum;
}

int expo(int base, int e) {
	int result = 1;
	while (e > 0) {
		result = result * base;
		e--;
	}
	return result;
}
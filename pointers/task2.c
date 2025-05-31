#include <stdio.h>
#include <stdlib.h>

int lengthString(char* str) {
	int cnt = 0;
	while (*str != '\0' && *str != '\n') {
		++cnt;
		++str;
	}
	return cnt;
}

int main() {
	char str[50];
	printf("Input a string: ");
	fgets(str, sizeof(str), stdin);
	printf("The length of the given string %sis : %d\n", str, lengthString(str));
}

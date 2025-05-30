#include <stdio.h>

int isLetter(char c) {
	if (c >= 'a' && c <= 'z') {
		return 1;
	}
	else if (c >= 'A' && c <= 'Z') {
		return 1;
	}
	return 0;
}

int isSameLetterDifferentCase(char c1, char c2) {
	if (isLetter(c1)) {
		if (isLetter(c2)) {
			if (c1 - c2 == 32 || c2 - c1 == 32) {
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	char c1 = '\0';
	char c2 = '\0';
	scanf(" %c", &c1);
	scanf(" %c", &c2);
	if (isSameLetterDifferentCase(c1, c2)) {
		printf("true\n");
	}
	else {
		printf("false\n");
	}
}

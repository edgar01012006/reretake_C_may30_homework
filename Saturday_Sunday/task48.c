#include <stdio.h>

int digitsCount(int num) {
	int cnt = 0;
	while (num) {
		num /= 10;
		++cnt;
	}
	return cnt;
}

int main() {
	int num = 0;
	scanf("%d", &num);
	printf("digitsCount = %d", digitsCount(num));
}


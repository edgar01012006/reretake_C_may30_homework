#include <stdio.h>

int isDivisible(int num1, int num2) {
	if (!(num1 % num2)) {
		return 1;
	}
	else if (!(num2 % num1)) {
		return 1;
	}
	return 0;
}

int main() {
	int num1 = 0;
	int num2 = 0;
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (isDivisible(num1, num2)) {
		printf("Numbers are divisible\n");
	}
	else {
		printf("Numbers are not divisible\n");
	}
}

#include <stdio.h>

int power(int num, int exp) {
	int res = 1;
	while (exp--) {
		res *= num;
	}
	return res;
}

int main() {
	int num = 0;
	scanf("%d", &num);
	int exp = 0;
	scanf("%d", &exp);
	printf("%d", power(num, exp));
}

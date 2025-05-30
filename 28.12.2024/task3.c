#include <stdio.h>
#include <stdlib.h>

enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

struct Schedule {
	enum Weekday day;
	char task[100];
};

void input(struct Schedule* s, const int size) {
	for (int i = 0; i < size; ++i) {
		s[i].day = i;
		scanf("%s", s[i].task);
	}
}

void output(struct Schedule* s, const int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d ", s[i].day);
		printf("%s\n", s[i].task);
	}
}

int main() {
	//printf("%lu", sizeof(enum Weekday));
	struct Schedule s[7];
	input(s, 7);
	output(s, 7);
}	

#include <stdio.h>

struct Student {
	char name[50];
	float marks[3];
};

void input(struct Student* s) {
	scanf("%s", s->name);
	for (int i = 0; i < 3; ++i) {
		scanf("%f", &s->marks[i]);
	}
}

void cmp(struct Student* s1, struct Student* s2) {
	float avg1 = 0;
	float avg2 = 0;
	for (int i = 0; i < 3; ++i) {
		avg1 += s1->marks[i];
		avg2 += s2->marks[i];
	}
	if (avg1 > avg2) {
		printf("%s student avg marks are higher\n", s1->name);
	}
	else if (avg1 < avg2) {
		printf("%s student avg marks are higher\n", s2->name);
	}
	else {
		printf("students avg marks are equal\n");
	}
}

int main() {
	struct Student s1;
	struct Student s2;
	input(&s1);
	input(&s2);
	cmp(&s1, &s2);
}

#include <stdio.h>

struct Person {
	char name[50];
	int age;
	float height;
};

void input(struct Person* p) {
	scanf("%s", p->name);
	scanf("%d", &p->age);
	scanf("%f", &p->height);
}

void output(struct Person* p) {
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%f\n", p->height);
}

int main() {
	struct Person p;
	input(&p);
	output(&p);
}

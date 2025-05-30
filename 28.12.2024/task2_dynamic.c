#include <stdio.h>
#include <stdlib.h>

struct Book {
        char title[150];
        char author[10];
        int year;
};

void input(struct Book* b, const int size) {
        for (int i = 0; i < size; ++i) {
                scanf("%s", b[i].title);
                scanf("%s", b[i].author);
                scanf("%d", &b[i].year);
        }
}

void output(struct Book* b, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("%s\n", b[i].title);
                printf("%s\n", b[i].author);
                printf("%d\n", b[i].year);
        }
}

int main() {
        const int size = 3;
        struct Book* p = (struct Book*) malloc(sizeof(struct Book) * size);
        input(p, size);
        output(p, size);
}

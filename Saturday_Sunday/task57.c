#include <stdio.h>

int sumAuxiliaryDiagonal(const int size, int (*nums)[size]) {
        int sum = 0;
        for (int i = 0, j = size - 1; i < size; ++i, --j) {
                sum += nums[i][j];
        }
        return sum;
}

int main () {
        const int size = 3;
        int arr[size][size];
        for (int i = 0; i < size; ++i ) {
                for (int j = 0; j < size; ++j) {
                        scanf("%d", &arr[i][j]);
                }
        }
        printf("%d", sumAuxiliaryDiagonal(size, arr));
}

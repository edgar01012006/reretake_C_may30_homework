#include <stdio.h>

void reverseString(char* str) {
       char* ptrStr = str;
       while (*ptrStr != '\0' && *ptrStr != '\n') {
            ++ptrStr;
       }
       --ptrStr;
       while (str < ptrStr) {
           char temp = *str;
           *str = *ptrStr;
           *ptrStr = temp;
           ++str;
           --ptrStr;
       }
}

int main() {
    char str[50];
	printf("Input a string: ");
	fgets(str, sizeof(str), stdin);
    reverseString(str);
    printf("Reverse of the string is : %s", str);
}
      

#include <stdio.h>

void mostRepeatedSym(char* sym) {
	int cntMostRepeatedSymbol = 0;
	int cntReset = 0;
	char mostRepeatedSymbol = '\0';
	char* symPtr = NULL;
	while (*sym) {
		if (mostRepeatedSymbol != *sym) {
			cntReset = 0;
			symPtr = sym;
			while (*symPtr) {
				if (*symPtr == *sym) {
					++cntReset;
				}
				++symPtr;
			}
			if (cntMostRepeatedSymbol < cntReset) {
				cntMostRepeatedSymbol = cntReset;
				mostRepeatedSymbol = *sym;
			}
		}
		++sym;
	}
	printf("Most repeated symbol is %c, %d times\n", mostRepeatedSymbol, cntMostRepeatedSymbol);
}
		 

int main() {
	char sym[50];
	scanf("%s", sym);
	mostRepeatedSym(sym);
}
	

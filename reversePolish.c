#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

//called as follows: ./calc 2 3 4 + '*'
int main(int argc, char *argv[]) {
	init();
	int i;
	init();

	int *deallocArray[argc - 1];

	for (i = 1; i < argc; i++) {
		char c = *argv[i];
		int *element = malloc(sizeof(int));
		deallocArray[i - 1] = element;
		int *o1;
		int *o2;
		switch (c) {
			case '+':
				o1 = pop();
				o2 = pop();
				*element = *o1 + *o2;
				break;
			case '*':
				o1 = pop();
				o2 = pop();
				*element = *o1 * *o2;
				break;
			default:
				*element = c - '0';
				break;
		}
		push(element);
	}
	int *result = pop();
	printf("%d\n", *result);

	for (i = 0; i < argc - 1; i++) {
		free(deallocArray[i]);
	}
}
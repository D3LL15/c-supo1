#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

int main() {
	init();

	int *x = malloc(sizeof(int));
	*x = 2;
	push(x);

	int *b = malloc(sizeof(int));
	*b = 3;
	push(b);

	int *c = malloc(sizeof(int));
	*c = 4;
	push(c);

	int *d = malloc(sizeof(int));
	*d = 5;
	push(d);

	int *z;
	z = pop();
	printf("%d \n", *z);

	int *w;
	w = pop();
	printf("%d \n", *w);

	int *y;
	y = pop();
	printf("%d \n", *y);

	int *m;
	m = pop();
	printf("%d \n", *m);

	free(x);
	free(b);
	free(c);
	free(d);

	return 42;
}
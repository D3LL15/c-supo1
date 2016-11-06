#include <stdio.h>
#include "structrefval.h"

void methodVal(struct testStruct x) {
	x.x = 7;
}

void methodPtr(struct testStruct *x) {
	(*x).x = 7;
}

int main() {
	struct testStruct y = {5};
	methodVal(y);
	printf("%d\n", y.x);

	struct testStruct a = {5};
	struct testStruct *z = &a;
	methodPtr(z);
	printf("%d\n", (*z).x);

	return 42;
}
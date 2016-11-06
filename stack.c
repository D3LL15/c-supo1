#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

void** stack;
int top;
int maxSize;

void push(void *item) {
	if (top >= maxSize) {
		int newMaxSize = maxSize * 2;
		void **newStack = malloc(sizeof(void*) * newMaxSize);
		int i;
		for (i = 0; i < maxSize; i ++) {
			newStack[i] = stack[i];
		}
		free(stack);
		stack = newStack;
		maxSize = newMaxSize;
	}
	stack[top] = item;
	top = top + 1;
}

void* pop() {
	if (top > 0) {
		top = top - 1;
		void *result = stack[top];
		return result;
	} else {
		return 0;
	}
}

void* head() {
	return stack[top];
}

void init() {
	stack = malloc(sizeof(void*) * 1);
	maxSize = 1;
	top = 0;
}
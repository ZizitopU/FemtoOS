#include <stdio.h>
#include <stdlib.h>

__attribute__((__noreturn__))
void abort(void) {
	printf("abort()\n");
	
	while (1) { }
	__builtin_unreachable();
}

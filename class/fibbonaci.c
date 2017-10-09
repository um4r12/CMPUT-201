#include <stdio.h>

int main () {
	int last = 1, current = 1, next;
	printf("%10d", last);
	printf("%10d", current);
	next = last + current;
	printf("%10d", next);
}

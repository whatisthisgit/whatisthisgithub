#include <stdio.h>

int main() {
	printf("%i\n", multi(6, 2));
	printf("%i\n", subs(6, 2));
	printf("%i\n", sum(6, 2));
	printf("%i\n", sum(4));
	return 0;
}

int multi(int a, int b) {
	return a*b;
}

int subs(int a, int b) {
	return a-b;
}

int sum(int a, int b) {
	return a+b;
}

int sum2(int a) {
	return a+(a-1);
}



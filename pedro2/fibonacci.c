#include <stdio.h>

int main() {
	printf("result:%i\n", fibonacci(10));
	return 0;
}

int fibonacci(int n) {
	int i;
	int x = 0;
	int y = 1;
	int result=0;
	for (i = 1; i < n; i = i + 1) {
		result = x + y;
		x = y;
		y = result;
	}
	return result;
}

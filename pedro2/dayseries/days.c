#include <stdio.h>

int main() {
	printf("leftover seconds:%i\n", s2d(86300));
	return 0;
}

int s2d(int s) {	
	int d = s / 86400;
	printf("days:%i\n", d);
	int resta = s - d*86400;
	return resta;
}

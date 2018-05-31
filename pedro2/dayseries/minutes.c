#include <stdio.h>

int main() {
	printf("leftover seconds:%i\n", s2m(200));
	return 0;
}

int s2m(int s) {	
	int m = s / 60;
	printf("minutes:%i\n", m);
	int resta = s - m*60;
	return resta;
}

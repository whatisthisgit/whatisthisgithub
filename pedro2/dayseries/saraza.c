#include <stdio.h>

int main() {
	printf("seconds:%i\n", s2m(s2h(s2d(90061))));
	return 0;
}

int s2d(int s) {	
	int d = s / 86400;
	printf("days:%i\n", d);
	int resta1 = s - d*86400;
	return resta1;
}

int s2h(int s) {	
	int h = s / 3600;
	printf("hours:%i\n", h);
	int resta2 = s - h*3600;
	return resta2;
}

int s2m(int s) {	
	int m = s / 60;
	printf("minutes:%i\n", m);
	int resta3 = s - m*60;
	return resta3;
}

#include <stdio.h>

int main() {
	s2e(180000);
	return 0;
}

int s2e(int s) {	
	int m = s / 60;
	int h = m / 60 ;
	int d = h / 24;
	printf("days:%i\nhours:%i\nminutes:%i\n", d, h, m);
	int resta = s - d*86400;
	printf("leftover seconds:%i\n", resta);
	return 0;
}

#include <stdio.h>

int main() {
	traducting(7);
	return 0;
}

int traducting (int n) {

	int c=0;	
	int d=0;
	int u=0;
	if (n >= 100) {
		c = n / 100;
		printf("Centenas = %i\n", c);
	}
	if (n >= 10) {
		d = (n - c * 100) / 10;
		printf("Decenas=%i\n", d);
	}
	u = n - d * 10 - c * 100;

	printf("Unidades=%i\n", u);
	return 0;
}

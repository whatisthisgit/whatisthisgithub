#include <stdio.h>

int multiplicatoria (int a){

	int rta = 1;
	int x;

	for(x = 0; x<= a; x = x+1){

		rta = rta * x;	

	}
	return rta;
}

int main() {	
	
	printf("%i\n", multiplicatoria(4));
	return 0;

}


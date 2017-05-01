#include <iostream>
using namespace std;

void fow(float n1, float n2) {
	printf("%f ^ %f = %f\n", n1, n2, pow(n1, n2));
}

int main(void) {

	printf("%d x %d = %d\n", 2, 5, 2 * 5);
	printf("%d x %d = %d\n", 3, 6, 3 * 6);
	printf("%d x %d = %d\n", 4, 8, 4 * 8);

	printf("%f / %f = %f\n", 1.0, 3.0, 1.0 / 3.0);
	printf("%f / %f = %f\n", 5.0, 4.0, 5.0 / 4.0);
	printf("%f / %f = %f\n", 7.0, 6.0, 7.0 / 6.0);
	
	fow(1.0, 3.0);
	fow(2.0, 7.0);
	fow(9.0, 4.0);
	
	return 0;
}

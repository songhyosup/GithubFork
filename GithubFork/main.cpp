#include <iostream>
using namespace std;

void fow(float n1, float n2) {
	printf("%f ^ %f = %f\n", n1, n2, pow(n1, n2));
	return 0;
}

void multi(int a, int b){
	printf("%d x %d = %d\n", a, b, a * b);
	return;
}
  
  void Divide(float a, float b)
{
printf("%f / %f = %f\n", a, b, a / b);
}

int main(void) {
	multi(2,5);
	multi(3,6);
	multi(4,8);

	Divide(1,3);
  Divide(5,4);
	Divide(7,6);
	fow(1.0, 3.0);
	fow(2.0, 7.0);
	fow(9.0, 4.0);

	return 0;
}

#include <stdio.h>

int main(int arg, char* argc[]){
	int  x;
	int *y;
	long z;
	double *a;
	char **b;
	printf("%d\n", sizeof(x));
	printf("%d\n", sizeof(y));
	printf("%d\n", sizeof(z));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
  return 0;
}

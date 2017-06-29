#include <stdio.h>
#include <math.h>
#include "function.h"

int main()
{
	float a, b, c, D, x;
	int k;
	printf("a*x^2+b*x+c=0\n");
	printf ("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	D = Dis(a, b, c);
	k = Check(D);
	switch (k) {
		case 0:
			x = Answer1(a, b, D);
			printf ("%.2f\n", x);
			break;
		case 1:
			printf("No roots\n");
			break;
		case 2:
			x = Answer2(a, b, D);
			printf ("%.2f\n", x);
			x = Answer3(a, b, D);
			printf ("%.2f\n", x);
			break;
	}
	return 0;
}

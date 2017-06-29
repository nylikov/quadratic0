#include <stdio.h>
#include <math.h>
#include "function.h"

int main()
{
	int a, b, c, D, k;
	float x;
	printf("a*(x*x)+b*x+c=0\n");
	printf ("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	D = Dis(a, b, c);
	k = Check(D);
	switch (k) {
		case 0:
			x = ((-1)*b) / (2 * a);
			printf ("%.2f", x);
			break;
		case 1:
			printf("No roots\n");
			break;
		case 2:
			x = ((-1)* b + sqrt(D)) / (2 * a);
			printf ("%.2f\n", x);
			x = ((-1)* b - sqrt(D)) / (2 * a);
			printf ("%.2f\n", x);
			break;
	}
	return 0;
}

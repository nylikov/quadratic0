#include "function.h"
#include <math.h>

int Check(float D)
{
	if (D == 0) {
		return 0;
	}
	if (D < 0) {
		return 1;
	}
	if (D > 0) {
		return 2;
	}
	return 0;
}

float Dis(float a, float b, float c)
{
	float D = b*b - 4 * a * c;
	return D;
}

float Answer1(float a, float b, float D)
{
	float x = ((-1)*b) / (2 * a);
	return x;
}

float Answer2(float a, float b, float D)
{
	float x = ((-1)* b + sqrt(D)) / (2 * a);
	return x;
}

float Answer3(float a, float b, float D)
{
	float x = ((-1)* b - sqrt(D)) / (2 * a); 
	return x;
}

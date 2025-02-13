#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	printf("enter radius and height\n");
	float rad = 0.0, hei = 0.0;
	scanf("%f%f", &rad, &hei);
	float v = 3.14 * rad * rad * hei;
	printf("Vcylinder = %f\n", v);
	return 0;
}
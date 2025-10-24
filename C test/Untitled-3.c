#include <stdio.h> 
#define PI 3.14 
int main()
{
	float r, area;
	printf("\n Enter r  value:");
	scanf("%f", &r); 
	area=PI*r*r;
    printf(" \n area=%f\n", PI * r * r);
	return 0;
}
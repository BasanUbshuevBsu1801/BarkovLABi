#include <stdio.h>
#include <math.h>

double f(double x);

void main(void)
{

	double x = 6;

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", f(x));

	printf("x = ");

	scanf("%lf", &x);

	printf("f = %.4lf", f(x));

}

double f(double x)

{

	return sqrt((x + 3) / (x - 3));

}


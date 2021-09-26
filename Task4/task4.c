#include <stdio.h>
#include <math.h>

double x, result;

void f(void);

void main(void)
{
	x = 6;

	f();

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", result);

	printf("x =");

	scanf("%lf", &x);

	f();

	printf("f = %.4lf", result);

}

void f(void)

{

	result = sqrt((x + 3) / (x - 3));

}

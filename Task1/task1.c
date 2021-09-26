#include <stdio.h>
#include <math.h>

void main(void)

{

	double x = 6;

	double f = sqrt((x + 3) / (x - 3));

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", f);

	printf("x = ");

	scanf("%lf", &x);

	f = sqrt((x + 3) / (x - 3));

	printf("f = %.4lf", f);

}


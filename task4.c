#include <stdio.h>
#include <math.h>

void function();

double x, result;

void main()
{
	x = 6;
	function(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n\n", result);
	printf("x =");
	scanf("%lf", &x);
	function(x);
	printf("f = %.4lf", result);
}

void function()
{
	result = sqrt((x + 3) / (x - 3));

}

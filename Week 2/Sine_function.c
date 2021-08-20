#include <stdio.h>
#include <math.h>
int main()
{
double output, x;
printf(" Enter a value : ");
scanf("%lf", &x);
output = sin(x);
printf("\n The Sine value of %lf = %f ", x, output);
return 0;
}

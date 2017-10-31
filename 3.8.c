#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
double a,b,s;
scanf ("%lf %lf",&a,&b);
while ((b-a)>0.0000000001)
{
s=a+(b-a)/2;
if (tan(s)-s<0)
{
a=s;
}
else
{
b=s;
}
}
s=a+(b-a)/2;
printf("%.10lf",s);
return 0;
}

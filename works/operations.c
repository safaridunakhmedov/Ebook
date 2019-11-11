#include <stdio.h>

int main()
{

int a, b, c, d, e;

a = 50;
b = 60;

c = a == b;
printf("the result of a==b = %d \n", c);

d = a << b;
printf("the result of a<b = %d \n", d);

e = a > b;
printf("the result of a>b  = %d \n", e);

float f = a / b;
printf("the result of a/b = %1.1f \n", f);

return 0;

}

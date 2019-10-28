/* printf example */
#include <stdio.h>
int main() 
{
float a=1.23456, b=7.0912, c=34.5435;

printf("floats: %3.1f %8.4f %6.4f \n", a, b, c); 
printf("floats: %4.2f %6.3f %9.5f \n", a, b, c); 
printf("floats: %4.3f %4.2f %11.6f \n", a, b, c); 
}

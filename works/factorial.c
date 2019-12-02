#include <stdio.h>

int main() {

  long int a=1,b=1,c=2,x;
  x=a;

    do  {
    x=x*b;
    a=a*(c-1);
    b++;
    c++;
    printf("the a is %ld\n",a);
    printf ("The factorial of %ld is %ld\n",b-1,x);
    } while( (a/(c-1)) == x );
}

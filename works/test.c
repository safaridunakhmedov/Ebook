#include<stdio.h>

void main() {

int a, b, c;

printf("Enter the first number: ");
scanf("%d", &a);
printf("Enter the second number: ");
scanf("%d", &b);
printf("Enter the third number: ");
scanf("%d", &c);

  if( a < b ) {
     if( c < a ) {
     printf ("%d , %d , %d \n", c, a, b);
     }
  }

  if( c < b ) {
     if( a < c ) {
     printf ("%d , %d , %d \n", a, c, b);
     }
  }
  if( b < a ) {
     if( c < b ) {
     printf ("%d , %d , %d \n", c, b, a);
     }
  }
  if( c < a ) {
     if( b < c ) {
     printf ("%d , %d , %d \n", b, c, a);
     }
  }
  if( a < c ) {
     if( b < a ) {
     printf ("%d , %d , %d \n", b, a, c);
     }
  }
  if( b < c ) {
     if( a < b ) {
     printf ("%d , %d , %d \n", a, b, c);
     }
  }
}


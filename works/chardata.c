#include<stdio.h>

void main()
   {
   char a='A';
   printf("a variable value as symbol: %c\n", a);
   printf("a variable value as decimal number: %d\n", a);
   printf("a variable value as octal number: %o\n", a);
   printf("a variable value as hexidecimal number: %x\n", a);

   printf("Dear student include any symbol: ");
   scanf("%c",&a);
   printf("a variable value as symbol: %c\n", a);
   printf("a variable value as decimal number: %d\n", a);
   printf("a variable value as octal number: %o\n", a);
   printf("a variable value as hexidecimal number: %x\n", a);

   char b=127;
  printf("b char valuable as decimal number (?127): %d\n",b);

  char  c=128;
  printf("b char valuable as decimal number (?128): %d\n",c);

  char d=129;
  printf("b char valuable as decimal number (?129): %d\n",d);

 }

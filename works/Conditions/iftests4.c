#include<stdio.h>
int main() {
 int number1=1, number2=2;
 printf("%d\n",number1=number2);

 if((number1=number2) == NULL)
  printf("True\n");
 else {
  printf("False\n");
 printf("%d\n",number1=number2);
 }
 if (NULL == (number1=number2))
  printf("False\n");
 else {
  printf("True\n");
}
return 0;
}

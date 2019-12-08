#include<stdio.h>
void main()
 {
 int number;
 printf("Please, enter the first number: ");
 scanf("%d",&number);

 if((number%2)==0)
  printf("Your number %d is even\n",number);
 else {
  printf("Your number %d is odd\n",number);
      }
 int remainder=number%2;
//Different way of ibtaining the same result
 if(remainder==0)
  printf("Your number is even\n",number);
 else {
  printf("The number is odd\n",number);
 }
}

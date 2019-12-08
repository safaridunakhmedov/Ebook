#include<stdio.h>
void main()
 {
 int number1, number2, yes_no, i;
 for ( yes_no=1, i=0 ; yes_no && (i<5) ; i++)
  {
  printf("Dear user, enter 1. number: ");
  scanf("%d",&number1);
  printf("Dear user, enter 2. number: ");
  scanf("%d",&number2);
  if (number1 > number2)
   printf("The 1. number %d is > than 2. number %d\n",number1,number2);
  //break;
  if (i!=4)
   {
   printf("User, do you want to continue (šī b %d. time)?",i+1);
   printf(" (If yes, enter a number that is not a 0)\n");
   scanf("%d",&yes_no);
   }
  else
   printf("Thank you, this is it.\n");
  }
 printf("this text will appear\n");
 }

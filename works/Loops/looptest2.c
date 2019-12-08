#include<stdio.h>
void main()
 {
 int number1, number2, yes_no, i;
 for ( yes_no=1, i=0 ; yes_no && (i<5) ; i++)
  {
  printf("User, enter 1. number: ");
  scanf("%d",&number1);
  printf("User, enter 2. number: ");
  scanf("%d",&number2);
  if (number1 > number2)
   printf("The 1. %d is > than 2. number %d\n",number1,number2);
  //break;
  printf("User, do you want to continue (it was %d. time)?",i+1);
  printf(" (If yes - enter any number except 0)\n");
  scanf("%d",&yes_no);
  }
 printf("This will appear anyways\n");
 }

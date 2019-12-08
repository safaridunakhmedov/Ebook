#include<stdio.h>
int user_function_5()
 {
 int i_uf;
 printf("Please enter one number ( no questions if 5 ): ");
 scanf("%d",&i_uf);
 return i_uf;
 }
void main()
 {
 int i_main, N=5;
 i_main=user_function_5();
 while(i_main!=N)
  {
  printf("You entered in response to my function %d\n",i_main);
  i_main=user_function_5();
  }
 printf("there are no questions, since you have entered 5!\n");
 }

#include<stdio.h>
void user_function_1()
 {
 printf("User, wlecome you from the function!\n");
 //user_function_1();
 }
void user_function_2();
 void main()
 {
 user_function_1();
 user_function_1();
 user_function_2();
 }
void user_function_2()
 {
 user_function_1();
 }

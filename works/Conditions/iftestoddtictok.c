#include<stdio.h> 
#include <time.h>
void main()
 {
 int number;
 clock_t start_t, end_t, total_t;
 printf("Please, enter the number: ");
 scanf("%d",&number);
 start_t = clock();
 if((number%2)==0)
  printf(" %d is even\n",number);
 else {
  printf(" %d is odd\n",number);
 }
 end_t = clock();
 // total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
 printf("Calculation with %c and with ==0 taken from %ld to %ld -> %ld\n",37,start_t,end_t,end_t-start_t);
 start_t = clock();
 if( number%2 )
  printf(" %d is odd\n",number);
 else {
  printf(" %d is even\n",number);
 }
 end_t = clock();
 printf("Calculation with %c without ==0 taken from %ld to %ld -> %ld\n",37,start_t,end_t,end_t-start_t);
 start_t = clock();
 if( (number<<31)>>31 )
  printf(" %d is odd\n",number);
 else {
  printf(" %d is even\n",number);
      }
 end_t = clock();
 printf("Calculation with << and >> taken from %ld to %ld -> %ld\n",start_t,end_t,end_t-start_t);
 }

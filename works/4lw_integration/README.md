THEORY

I used 2 different types of numerical integration (trapezoidal, rectengular and Simpson's) methods to calculate the integral of sin^2(x) from a to b. For each method i created loops to calculate the sum according to the formulas.

CODE

#include<stdio.h>

#include<math.h>

int main(){

int n,i;

double a,b,h,x,sum=0,integral1,integral2,integral3,sum1,sum3,sum4;

  

  printf("\nEnter the no. of sub-intervals: ");
  
  scanf("%d",&n);
  
  printf("\nEnter the initial limit: ");
  
  scanf("%lf",&a);
  
  printf("\nEnter the final limit: ");
  
  scanf("%lf",&b);
  
  h=fabs(b-a)/n;
  
  for(i=1;i<n;i++){
    
    x=a+i*h;
    
    sum=sum+pow(sin(x),2);
  
  }
  
  integral1=(h/2)*((pow(sin(a),2)+pow(sin(b),2)+ 2*sum));
  
  for(i=0;i<n;i++){
    
    x=a+i*h;
    
    sum1=sum1+pow(sin(x),2);
  }
  
  integral2=h*sum1;
  
  for(i=1;i<(n+ 1);i++){
     
     x=a+i*h; 
     
     sum3=sum3+ 4*pow(sin(x),2);
     
     i++;
  
  }
  
  for(i=0;i<(n+ 1);i++){
     
     x=a+i*h; 
     
     sum4=sum4+ 2*pow(sin(x),2);
     
     i++;
  }
  
  integral3=(h/3)*(sum3+sum4);
  
printf("The integral using trapezoidal rule is: %lf \n",integral1);

printf("The integral using rectangular rule is: %lf \n",integral2);

printf("The integral using Simpson's rule is: %lf \n",integral3);

}

RESULT

Enter the no. of sub-intervals: 10                                                                                                        
                                                                                                                                          
Enter the initial limit: 0                                                                                                                
                                                                                                                                          
Enter the final limit: 1                                                                                                                  
The integral using trapezoidal rule is: 0.273434                                                                                          
The integral using rectangular rule is: 0.238030                                                                                          
The integral using Simpson's rule is: 0.296276 

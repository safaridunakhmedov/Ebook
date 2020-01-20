ANALYSIS

This code basically calculates the derivative of sin^2(x) twice using two methods each time. The f(x) Stands for forward calculation while F(x) means step calculation.

CODE

#include<stdio.h>

#include<math.h>

void main(){

double a,b,x,delta_x,y,y1,z,z1;

printf("Enter the a: ");

scanf("%lf", &a);

printf("Enter the b: ");

scanf("%lf", &b);

printf("Enter the precision number: ");

scanf("%lf", &delta_x);

 printf("  x     f(x)   f'(x)   F'(x)   f''(x)   F ''(x)\n");

x = a;

while(x<b){
     
  
  y=(2*sin(x)*cos(x));
  
  y1=((pow(sin(x+delta_x),2)-(pow(sin(x),2)))/delta_x);
  
  
  z=2*cos(2*x);
  
  z1=(pow(sin(x+delta_x),2) - 2*pow(sin(x),2) + pow(sin(x-delta_x),2))/pow(delta_x,2);
  
  printf("%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t\n",x,pow(sin(x),2),y,y1,z,z1);
  
  x += delta_x;
  }

}

OUTPUT
#include<stdio.h>
#include<math.h>

void main(){
 double a,b,x,delta_x,y,y1,z,z1;
printf("Enter the a: ");
scanf("%lf", &a);
printf("Enter the b: ");
scanf("%lf", &b);
printf("Enter the precision number: ");
scanf("%lf", &delta_x);

 printf("  x     f(x)   f'(x)   F'(x)   f''(x)   F ''(x)\n");
 x = a;
 while(x<b){
     
  y=(2*sin(x)*cos(x));
  y1=((pow(sin(x+delta_x),2)-(pow(sin(x),2)))/delta_x);
  
  z=2*cos(2*x);
  z1=(pow(sin(x+delta_x),2) - 2*pow(sin(x),2) + pow(sin(x-delta_x),2))/pow(delta_x,2);
  
  printf("%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t\n",x,pow(sin(x),2),y,y1,z,z1);
  x += delta_x;
  }
}

FIGURE

https://github.com/safaridunakhmedov/Ebook/blob/master/works/3lw_derivative/Figure3.png


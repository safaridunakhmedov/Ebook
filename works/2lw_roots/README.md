THEORY
 
 I used the theory of Bisectional calculation to find the value of x in sin^2(x) in the interval from a to b with a certain precision number.
 
 CODE
 
 #include<stdio.h>

#include<math.h>

int main(){

double a, b, x, delta_x, funkca, funkcb, funkcx;

int k=0;
 
 printf("Enter the a: ");

scanf("%lf", &a);

printf("Enter the b: ");

scanf("%lf", &b);

printf("Enter the precision number: ");

scanf("%lf", &delta_x);

funkca = pow(sin(a),2); funkcb = pow(sin(b),2);

if(funkca*funkcb<0){

printf("The interval [%.2f;%.2f] for the sin^2(x) ",a,b);

printf("No roots are available for this function\n");

return 1;
     
 }


printf("               sin^2(%7.3f)=%7.3f\t\t\t\t",a,pow(sin(a),2));

printf("sin(%7.3f)=%7.3f\n",b,pow(sin(b),2));

 while((b-a)>delta_x){

k++;

x = (a+b)/2.;

if(funkca*pow(sin(x),2)>0) 

  a = x;

  else

  b = x;

  printf("%2d. iterations: sin^2(%7.3f)=%7.3f\t",k,a,pow(sin(a),2));

  printf("sin^2(%7.3f)=%7.3f\t",x,pow(sin(x),2));

  printf("sin^2(%7.3f)=%7.3f\n",b,pow(sin(b),2));
     
 }

 printf("The x=%.3f, while sin^2(x) is %.3f\n",x,pow(sin(x),2));

 return 0;
}

OUTPUT

Enter the a: 2                                                                                                                            
Enter the b: 15                                                                                                                           
Enter the precision number: 0.01                                                                                                          
               sin^2(  2.000)=  0.827                           sin( 15.000)=  0.423                                                      
 1. iterations: sin^2(  8.500)=  0.638  sin^2(  8.500)=  0.638  sin^2( 15.000)=  0.423                                                    
 2. iterations: sin^2( 11.750)=  0.531  sin^2( 11.750)=  0.531  sin^2( 15.000)=  0.423                                                    
 3. iterations: sin^2( 13.375)=  0.523  sin^2( 13.375)=  0.523  sin^2( 15.000)=  0.423                                                    
 4. iterations: sin^2( 14.188)=  0.997  sin^2( 14.188)=  0.997  sin^2( 15.000)=  0.423                                                    
 5. iterations: sin^2( 14.594)=  0.806  sin^2( 14.594)=  0.806  sin^2( 15.000)=  0.423                                                    
 6. iterations: sin^2( 14.797)=  0.624  sin^2( 14.797)=  0.624  sin^2( 15.000)=  0.423                                                    
 7. iterations: sin^2( 14.898)=  0.524  sin^2( 14.898)=  0.524  sin^2( 15.000)=  0.423                                                    
 8. iterations: sin^2( 14.949)=  0.473  sin^2( 14.949)=  0.473  sin^2( 15.000)=  0.423                                                    
 9. iterations: sin^2( 14.975)=  0.448  sin^2( 14.975)=  0.448  sin^2( 15.000)=  0.423                                                    
10. iterations: sin^2( 14.987)=  0.435  sin^2( 14.987)=  0.435  sin^2( 15.000)=  0.423                                                    
11. iterations: sin^2( 14.994)=  0.429  sin^2( 14.994)=  0.429  sin^2( 15.000)=  0.423                                                    
The x=14.994, while sin^2(x) is 0.429  

FIGURE

https://raw.githubusercontent.com/safaridunakhmedov/Ebook/master/works/1lw_series/fig1.png

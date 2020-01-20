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
  printf("Intervālā [%.2f;%.2f] sin^2(x) funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;}

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

 printf("Sākne atrodas pie x=%.3f, jo sin(x) ir %.3f\n",x,pow(sin(x),2));

 return 0;
}

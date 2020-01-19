Theory



Code

#include<stdio.h>
#include<math.h>
void main(){
 double x,y,a,S;
 int k=1;
 printf("Enter the x: ");
 scanf("%lf", &x);
 y = sin(x)*sin(x);

 a = pow(-1,k+1)*pow(x,2*k)*pow(2,2*k-1)/(1*2);
 S = a;
 printf("%.2f\t%8.3f\t%8.2f\n",x,a,S);

 while(k<501){
  k++;
  a = a * (-1)*pow(x,2)*4 * (pow(((2*k) * (2*k-1)),(-1)));
  S = S + a;
  if(k>499) {
  printf("%.2f\t%8.10f\t%8.5f\n",x,a,S);

  }
  
  }
   printf("The value using Taylor series\n %.5",S);
  printf("the value using functions y=sin(%f)*sin(%f)=%f\n",x,x,y);
  
  
printf("   500 \n");
printf("   _      (k+1)    2   \n");
printf("   \  (-1)      * x  * 4 \n");
printf("f=  \ _________________  \n");
printf("    /                   \n");
printf("   /    (2k) * (2k-1)\n");
printf("  /_                \n");
printf("   1                \n");
printf("               2 \n");  
printf("       (-1) * x  * 4\n");
printf("   R= ________________\n");
printf("        (2k)  * (2k-1)\n");
}

OUTPUT

Enter the x: 2.5                                                                                                                          
2.50       6.250            6.25                                                                                                          
2.50    -0.0000000000    0.35817                                                                                                          
2.50    0.0000000000     0.35817                                                                                                          
The value using Taylor series                                                                                                             
 the value using functions y=sin(2.500000)*sin(2.500000)=0.358169                                                                         
   500                                                                                                                                    
   _      (k+1)    2                                                                                                                      
     (-1)      * x  * 4                                                                                                                   
f=   _________________                                                                                                                    
    /                                                                                                                                     
   /    (2k) * (2k-1)                                                                                                                     
  /_                                                                                                                                      
   1                                                                                                                                      
               2                                                                                                                          
       (-1) * x  * 4                                                                                                                      
   R= ________________                                                                                                                    
        (2k)  * (2k-1)  
Function

https://github.com/safaridunakhmedov/Ebook/blob/master/works/1lw_series/fig1.png?raw=true

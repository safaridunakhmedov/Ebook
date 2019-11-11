 #include<stdio.h>

void main(){
#define A 8;
int a=8, b=9;

printf("%d + %d = %d  (sizeof \"+\" %lu byte(s))\n",a,b,a+b,sizeof(a+b));
printf("%d %c %d = %d  (sizeof \"%c\" %lu byte(s))\n",a,'%',b,a%b,'%',sizeof(a%b));
printf("%d * %d = %d  (sizeof \"*\" %lu byte(s))\n",a,b,a*b,sizeof(a*b));
printf("%d - %d = %d  (sizeof \"-\" %lu byte(s))\n",a,b,a-b,sizeof(a-b));
printf("%d / %d = %.1f (result of using (float)a/b)\n",a,b,(float)a/b);

printf("%d < %d = %d  (sizeof \"<\" %lu byte(s))\n",a,b,a<b,sizeof(a<b));
printf("%d > %d = %d  (sizeof \">\" %lu byte(s))\n",a,b,a>b,sizeof(a>b));
printf("%d <= %d = %d  (sizeof \"<=\" %lu byte(s))\n",a,b,a<=b,sizeof(a<=b));
printf("%d >= %d = %d  (sizeof \">=\" %lu byte(s))\n",a,b,a>=b,sizeof(a>=b));

printf("%d << %d = %d  (sizeof \"<<\" %lu byte(s))\n",a,b,a<<b,sizeof(a<<b));
printf("%d >> %d = %d  (sizeof \">>\" %lu byte(s))\n",234,2,234>>2,sizeof(234>>2));

printf("%d += %d = %d  (sizeof \"+=\" %lu byte(s))\n",a,b,a+=b,sizeof(a+=b));
printf("%d -= %d = %d  (sizeof \"-=\" %lu byte(s))\n",a,b,a-=b,sizeof(a-=b));
printf("%d *= %d = %d  (sizeof \"*=\" %lu byte(s))\n",a,b,a*=b,sizeof(a*=b));
a=A;
printf("%d <<= %d = %d  (sizeof \"<<=\" %lu byte(s))\n",a,b,a<<=b,sizeof(a<<=b));
a=A
printf("%d >>= %d = %d  (sizeof \">>=\" %lu byte(s))\n",a,b,a>>=b,sizeof(a>>=b));
a=A;
printf("%d++ = %d (size of \"a++\" %lu byte(s))\n",a,a++,sizeof(a++));
printf("++%d = %d (size of \"++a\" %lu byte(s))\n",a,++a,sizeof(++a));
a=A;
printf("%d || %d = %d (size of \"||\" %lu byte(s))\n",a,b,(a == b),sizeof(a||b));
printf("%d ^ %d = %d  (sizeof \"^\" %lu byte(s))\n",a,b,a^b,sizeof(a^b));
printf("%d = %d(size of \"~a\" %lu byte(s))\n",a,~a,sizeof(a++));
}



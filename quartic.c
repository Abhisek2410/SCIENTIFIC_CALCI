#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
float k,l,m,n,o,K,L,M,N,O,p,q,r,s,t,cal1,u,a,b,c,d,i,A,B,C,D,e,f,g,h,cal;
 float j,x1,x2;
 printf("enter coefficients\n");
 scanf("%f%f%f%f%f",&k,&l,&m,&n,&o);
 p=k;q=l;r=m;s=n;t=o;
 for(u=-100;u<=100;u++)
{
 K=k*u*u*u*u;
 L=l*u*u*u;
 M=m*u*u;
N=n*u;
 
 cal1=K+L+M+N+o;
 if(cal1==0)
{ printf("root1=%f\n",u);
break;}
} 

{q=u*p+q;
r=u*q+r;
s=u*r+s;
t=u*s+t;}

a=p;b=q;c=r;d=s;
e=a;f=b;g=c;h=d;
for(i=-100;i<=100;i++)
{
 A=a*i*i*i;
 B=b*i*i;
 C=c*i;
 
 cal=A+B+C+d;
 if(cal==0)
 
 { printf("root2=%f\n",i);
break; }
    
}
 {
{ f=i*e+f;
g=f*i+g;
h=g*i+h;}

j=f*f-4*e*g; 
if(j==0) 
{ 
 
x1=-f/(2*e); 
x2=-f/(2*e); 
printf("Root3=%.4f\nRoot4=%.4f",x1,x2); 
} 
else if(j>0) 
{ 
 
x1=(-f+sqrt(j))/(2*e); 
x2=(-f-sqrt(j))/(2*e); 
printf("Root3=%.4f\nRoot4=%.4f", x1,x2); 
} 
else  
{ 

x1=-f/(2*e); 
x2=sqrt(fabs(j))/(2*e); 
printf("Root3=%.3f+i.4%f\nRoot4=%.3f-i%.4f ",x1,x2,x1,x2); 
} 
return 0;

}
}


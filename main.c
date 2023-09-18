/*PROGRAM TO MAKE A SCIENTIFIC CALCULATOR*/
#include <stdio.h>
#include <stdlib.h>  /*LINKING SECTION*/     
#include <math.h>

int main()
{

    int num1, num2;          /*DECLARATION OF VARIABLES*/
    float result = 0;
    int a1, ch;
    printf("[ HELLO WELCOME TO NEW GEN SCIENTIFIC CALCI!!!! ]\n");
    printf("SELECT THE DESIRED OPERATION \n1:MATH\n2:AREA\n3:LOGICAL\n0:STOP CALCULATION\n");
    scanf(" %d", &a1);
    while (a1 != 0)
    {
        if (a1 == 1)         /*TO PERFORM MATHEMATICAL OPERATIONS*/
        {
            printf("1: Addition\n 2: Substraction \n 3: Multiplication \n 4: Divide \n 5: Modulus \nChoose operation to perform (Enter 1 - 5): ");
            scanf(" %d", &ch);
            if (ch <= 5)  /* THE REQUIRED OPERATION IS WITH IN THE GIVEN LIST IF                                                           
                              CONDITION IS SATISFIED*/

            {
                printf("Enter first number: ");
                scanf("%d", &num1);                /*READS THE FIRST NUMBER*/
                printf("Enter second number: ");
                scanf("%d", &num2);              /*READS THE SECOND NUMBER*/
                switch (ch)                      /*SEARCHES THE OPERATOR CASE*/
                {

                case 1:
                    result = num1 + num2;
                    printf("The Sum of %d and %d = %.2f\n", num1, num2, result); /*PRINTS OUTPUT*/
                    break;
                case 2:
                    result = num1 - num2;
                    printf("The Substraction of %d and %d = %.2f\n", num1, num2, result);
                    break;
                case 3:
                    result = num1 * num2;
                    printf("The Multiplication of %d and %d = %.2f\n", num1, num2, result);
                    break;
                case 4:
                    result = (float)num1 / (float)num2;
                    printf("The Divide of %d and %d = %.2f\n", num1, num2, result);
                    break;
                case 5:
                    result = num1 % num2;
                    printf("The Modulus of %d and %d = %.2f\n", num1, num2, result);
                    break;
                }
            }
            else
                printf("Invalid operation. Pls select Athematic Operators\n");
        }
        else if (a1 == 2)        /*TO PERFORM AREA OPERATIONS*/
        {
            printf("choose the dimension\n");
            int a2, c;                                                           /* c is declared for case 5*/
            float side, base, length, breadth, height, area, radius, s, n, r, a; /* s, n, r, a are declared for case 5*/
            printf(" 1 --> Circle\n");
            printf(" 2 --> Rectangle\n");
            printf(" 3 --> Triangle\n");
            printf(" 4 --> Square\n");
            printf(" 5 --> Regular polygon\n");
            scanf("%d", &a2);
            switch (a2)
            {
            case 1:
                printf("Enter the radius\n");
                scanf("%f", &radius);
                area = 3.142 * radius * radius;
                printf("Area of a circle = %f\n", area);
                break;
            case 2:
                printf("Enter the breadth and length\n");
                scanf("%f %f", &breadth, &length);
                area = breadth * length;
                printf("Area of a Reactangle = %f\n", area);
                break;
            case 3:
                printf("Enter the base and height\n");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of a Triangle = %f\n", area);
                break;
            case 4:
                printf("Enter the side\n");
                scanf("%f", &side);
                area = side * side;
                printf("Area of a Square=%f\n", area);
                break;
            case 5:
                printf("ENTER THE NUMBER OF SIDES OF THE POLYGON\n");
                scanf("%f", &n);
                printf("SELECT THE KNOWN PARAMETER:\n1:SIDE LENGTH\n2:RADIUS\n3:APOTHEM\n");
                scanf("%d", &c);

                switch (c)
                {
                case 1:
                    printf("Enter the length of the side\n");
                    scanf("%f", &s);
                    area = (s * s * n) / (4 * tan((180 / n) * 3.142 / 180));/* FORMULA BASED ON SIDE LENGTH*/
                    printf("The area of %f sides=%f\n", n, area);
                    break;
                case 2:
                    printf("Enter the radius of the POLYGON\n");
                    scanf("%f", &r);
                    area = (r * r * n * (sin((360 / n) * 3.142 / 180)) / 2);/* FORMULA BASED ON RADIUS*/
                    printf("The area =%f\n", area);
                    break;
                case 3:
                    printf("Enter the apothem of the polygon\n");
                    scanf("%f", &a);
                    area = (a * a * n * tan((180 / n) * 3.142 / 180));/* FORMULA BASED ON APOTHEM*/
                    printf("The area =%f\n", area);
                    break;
                }
            default:
                printf("Invalid OPTION");
            }
        }
        else if (a1 == 3)  /*TO PERFORM MATHEMATICAL OPERATIONS*/
        {
            int z, p, r, t, int_amt;
            printf("select the desired operation\n");
            printf(" 1 --> simple interest\n");
            printf(" 2 -->polynomial equation\n");
            scanf("%d", &z);
            switch (z)
            {
            case 1:        /*FINDS SIMPLE INTEREST*/
                printf("Input principle, Rate of interest & time to find simple interest: \n");
                scanf("%d%d%d", &p, &r, &t);
                int_amt = (p * r * t) / 100;
                printf("Simple interest = %d", int_amt);
                return 0;
            case 2:/*TO SOLVE POLYNOMIAL EQUATION*/
                printf("enter the type of polynomial equation\n");
                int y;
                printf(" 1 --> quadratic\n");
                printf(" 2 --> cubic\n");
                printf(" 3 --> quartic\n");
                scanf("%d", &y);
                switch (y)
                {
                case 1:
                    printf("Enter non zero coefficients a, b and c of a quadratic equation \n");
                    float a5, b5, c5, d5, x11, x21; /*Declaration of variables */

                    scanf("%f%f%f", &a5, &b5, &c5); /* Input the coefficients */
                    d5 = b5 * b5 - 4 * a5 * c5;     /* Computing discriminant */
                    if (d5 == 0)                    /* Computing real and equal roots */
                    {
                        printf("Roots are equal\n");
                        x11 = -b5 / (2 * a5);
                        x21 = -b5 / (2 * a5);
                        printf("Root1=%.3f \t Root2=%.3f", x11, x21);
                    }
                    else if (d5 > 0) /* Computing real and distinct roots */
                    {
                        printf("Roots are real and distinct\n");
                        x11 = (-b5 + sqrt(d5)) / (2 * a5);
                        x21 = (-b5 - sqrt(d5)) / (2 * a5);
                        printf("Root1=%.3f \t Root2=%.3f", x11, x21);
                    }
                    else /* Computing complex roots */
                    {
                        printf("Roots are complex\n");
                        x11 = -b5 / (2 * a5);
                        x21 = sqrt(fabs(d5)) / (2 * a5);
                        printf("Root1=%.3f+i.3%f \t Root2=%.3f-i%.3f ", x11, x21, x11, x21);
                    }
                    case 2:                                                       /*TO SOLVE CUBIC EQUATION WITH  ALL THE CASES*/
                    printf("enter coefficients\n");
                    float a3,b3,c3,d3,i3,A3,B3,C3,D3,e3,f3,g3,h3,cal0,r1;
                    float j3,x12,x22;
                    scanf("%f%f%f%f",&a3,&b3,&c3,&d3);
                    e3=a3;f3=b3;g3=c3;h3=d3;
                    for(i3=-100;i3<=100;i3++)
                    {
                    A3=a3*i3*i3*i3;                     /*INSPECTION METHOD*/
                    B3=b3*i3*i3;
                    C3=c3*i3;
                    cal0=A3+B3+C3+d3;
                    if(cal0==0)
 
                    { printf("root1=%f\n",i3);
                    break; }
                     }
                     {
                 {  
                     f3=i3*e3+f3;
                     g3=f3*i3+g3;
                     h3=g3*i3+h3;}
                     j3=f3*f3-4*e3*g3; 
                     if(j3==0) 
                     { 
                     x12=-f3/(2*e3); 
                     x22=-f3/(2*e3); 
                    printf("Root2=%.4f\nRoot3=%.4f",x12,x22); 
                } 
                     else if(j3>0) 
                 { 
                    x12=(-f3+sqrt(j3))/(2*e3); 
                    x22=(-f3-sqrt(j3))/(2*e3); 
                    printf("Root2=%.4f\nRoot3=%.4f", x12,x22); 
                   } 
                    else  
                 { 
                    x12=-f3/(2*e3); 
                    x22=sqrt(fabs(j3))/(2*e3); 
                    printf("Root2=%.3f+i.4%f\nRoot3=%.3f-i%.4f ",x12,x22,x12,x22); 
                   } 
                     return 0;
                     }
                      case 3:                                     /*TO SOLVE QUARTIC EQUATION WITH  ALL THE CASES*/
                      printf("enter coefficients\n");
                      float k,l,m,n,o,K,L,M,N,O,p,q,r,s,t,cal1,u,a,b,c,d,i,A,B,C,D,e,f,g,h,cal;
                      float j,x1,x2;
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
 
     {
         printf("root2=%f\n",i);
                    break; }
    
                      }
                 {{
                     f=i*e+f;
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

                }
            }
        }}
        else
            printf("Invalid Option...\n");
        printf("\nSELECT THE DESIRED OPERATION \n1:MATH\n2:AREA\n3:LOGICAL\n0:STOP CALCULATION\n");
        scanf(" %d", &a1);
    }
    return 0;
}


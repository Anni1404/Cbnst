#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define    f(x)    (x*x*x)-(3*x)-5
#define   g(x)   (3*x*x)-3

void main()
{
	 float x0, x1, f0, f1, g0, e,x2;
	 int step = 1, N=10;
	 printf("\nEnter initial guess 1:\n");
	 scanf("%f", &x0);
     printf("\nEnter initial guess 2:\n");
	 scanf("%f", &x2);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
     if(f(x0)>f(x2))
     {
        x0=x2;
     }
     printf("Final Initial guess is %f",x0);
	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }

		
		  x1 = x0 - f0/g0;

		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		  x0 = x1;
		  
		  step = step+1;
		
		  if(step > N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
		  
		  f1 = f(x1);
		  
	 }while(fabs(f1)>e);
	
	 printf("\nRoot is: %f", x1);
}
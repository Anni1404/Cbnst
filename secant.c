#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define    f(x)    cos(x)+2*sin(x)+(x*x)

void main()
{
	 float x0, x1, x2, f0, f1, f2, e;
	 int step = 1, N;
	 printf("\nEnter initial guesses:\n");
	 scanf("%f%f", &x0, &x1);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 printf("Enter maximum iteration:\n");
	 scanf("%d", &N);
	 printf("\nStep\t      x0\t        x1\t        x2\t         f(x2)\n");
	 do
	 {
		  f0 = f(x0);
           f0 = roundf(f0 * 10000) / 10000;
		  f1 = f(x1);
           f1 = roundf(f1 * 10000) / 10000;
		  if(f0 == f1)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }
		  
		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
           x2 = roundf(x2 * 10000) / 10000;
		  f2 = f(x2);
           f1 = roundf(f2 * 10000) / 10000;
		  
		 printf("%d\t   %.4f\t   %.4f\t   %.4f\t   %.4f\n", step, x0, x1, x2, f2);
		  
		 x0 = roundf(x1 * 10000) / 10000;
        f0 = roundf(f1 * 10000) / 10000;
        x1 = roundf(x2 * 10000) / 10000;
        f1 = roundf(f2 * 10000) / 10000;
		  
		  step = step + 1;
		  
		  if(step > N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
	 }while(fabs(f2)>e);
	x2 = roundf(x2 * 10000) / 10000;
	 printf("\nRoot is: %.4f", x2);
}
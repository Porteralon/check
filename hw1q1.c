/*-------------------------------------------------------------------------
  Include files:
--------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include<assert.h>

/*=========================================================================
  Constants and definitions:
==========================================================================*/

/* put your #defines and typedefs here*/
#define ZERO 0.000001

/*-------------------------------------------------------------------------
The program picks up coefficient of polynomial from the user,
If the first one is Zero she asks the user to Enter the coefficient again until the first one is different from zero.
The program calculate the roots of the polynomial and returns a message of 2 roots, 1 root or no roots according to the calculation.
 -------------------------------------------------------------------------*/
int main()
{
    double a=0,b=0,c=0, disc=0, root1=0, root2=0;
 printf("Enter the coefficients of a polynomial:\n");
scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
 while (a*a<ZERO*ZERO) // Checks if the absolute value of the first coefficient is smaller than 0.000001 (to check if it is Zero, because of the Precision limit in double).
 { // If the program reach here it means the first coefficient is zero. the program will print a message asking the user to re-enter 3 coefficients.
    printf("Enter the coefficients of a polynomial:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
 }
 if (b*b-4*a*c<-1*ZERO) // Check if there is a real square root for the Discriminant.
    printf("There are no roots\n"); // If not it means there are no real roots for the polynomial and than it will print it.
    else
{
 disc = sqrt(b*b-4*a*c); // calculate the Discriminant.
 root1 = (-b-disc)/ (2*a); // caculate the roots
 root2 = (-b+disc)/ (2*a);
 if (root1*root1<ZERO*ZERO) // checks if the roots are 0.
    root1=0;
  if (root2*root2<ZERO*ZERO)
    root2=0;
 if (root1==root2) // cheack if the roots are equal.
    printf("The root is %.2f\n", root1);
 else
    printf("The roots are %.2f, %.2f\n", root1<root2?root1:root2, root1>root2?root1:root2); // Print the roots - the smaller one first.
}
  return 0;
}

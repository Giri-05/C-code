/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float pi = 3.14;
    
    int r;
    printf("Enter the value of Radius: ");
    scanf("%d", &r);
    printf("Area of Circle is = %f \n", r*r*pi);
    
    int circumfrence = r;
    
    printf("Circumference of Circle is %f", 2*pi*r);
    
    return 0;
    
    
}

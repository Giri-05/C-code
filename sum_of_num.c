/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,sum=0;
    printf("Enter number to sum: ");
    scanf("%d",&i);
    while(i>0){
        sum=sum+(i%10);
        i=i/10;
    }
    printf("%d",sum);
    return 0;
}
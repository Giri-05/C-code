/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    char op;
    printf("Enter numbers: ");
    scanf("%d %c %d", &num1, &op, &num2);
    
    if(op == '+'){
        printf("Ans:%d %c %d = %d",num1,op,num2, num1 + num2);
    }
    if(op == '-'){
        printf("Ans:%d %c %d = %d",num1,op,num2, num1 - num2);
    }
    if(op == '*'){
        printf("Ans:%d %c %d = %d",num1,op,num2, num1 * num2);
    }
    if(op == '/'){
        printf("Ans:%d %c %d = %d",num1,op,num2, num1 / num2);
    }
    
    return 0;
}

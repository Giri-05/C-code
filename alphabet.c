/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char i;
    printf("Enter character: ");
    scanf("%c",&i);
    if(i>=65 && i<=90){
    for(i;i<=90;i++){
        printf("%c\n",i);
    }
    }
    else if(i>=97 && i<=122){
        for(i;i<=122;i++){
            printf("%c\n",i);
        }
    }

    return 0;
}
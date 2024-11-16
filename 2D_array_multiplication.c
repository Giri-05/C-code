/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];
    int i,j,k;
    printf("Enter elements for Matrix_1: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter elements for Matrix_2: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    printf("Matrix_1: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix_2: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    //to multiplication the given matrix...
    printf("The answer is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m3[i][j]=0;
            for(k=0;k<3;k++){
                m3[i][j] = m3[i][j]+(m1[i][k]*m2[k][j]);
            }
        }
    }
    
    //to print the result....
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
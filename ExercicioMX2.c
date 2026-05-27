#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define L 3
#define C 3


int main()
{
    int m[L][C];
    int i,j;
    
    
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("Digite o valor [%d][%d] = \n",i,j);
            scanf("%d",&m[i][j]);
            m[i][j] = m[i][j]*2;
        }
    }

    
    printf("\nImprimindo a matriz *2: \n");
    
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }


    return 0;
}
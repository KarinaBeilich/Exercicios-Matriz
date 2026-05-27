#include <stdio.h>

int main()
{
    int i, j;
    
    printf("\nRETANGULO\n");
    printf("\n");
    
    for (i=0;i<3;i++){ //inicio, condição, incremento 
        for (j=0;j<5;j++){
            printf("%2s","X");
        }
        printf("\n");
    }


    int t, k;
    
    printf("\nQUADRADO\n");
    printf("\n");
    
    for(t=0;t<4;t++){
        for(k=0;k<4;k++){
            printf("%2s","X");
        }
        printf("\n");
    }
    
    printf("\n");
    
    int z,l;
    
    printf("TRIANGULO RETANGULO\n");
    
    printf("\n");
    
    for(z=0; z<4;z++){
        for(l=0; l<=z;l++){
            printf("%2s","X");
        }
        printf("\n");
    }
    
 
    return 0;
}

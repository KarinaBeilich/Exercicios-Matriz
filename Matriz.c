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

   /*
   (i=0) = inicio onde o contador inicia de 0 ate....
   (i<L) = enquanto seja menor que... (neste caso menor que 5 que é o valor de L)
   (i++) =  icremento ao final da regra (final da linha +1 ate chegar na condição)
   */


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

#include <stdio.h>

void movimentoTorre(int casas) {
    if (casas > 0) {
         printf("Movimento da Torre:");
            printf(" %d CASAS PARA DIREITA\n", casas);
                           movimentoTorre(casas -1);
           
      
    }
}
 void movimentoBispo(int casas) {
    if (casas > 0) {
         printf("Movimento do Bispo:");
            printf(" %d CASAS PARA CIMA,DIREITA\n", casas);
                 movimentoBispo(casas -1);
           
      
    }
}
 void movimentoRainha(int casas) {
    if (casas > 0) {
         printf("Movimento da RAINHA:");
            printf(" %d CASAS PARA ESQUERDA\n", casas);
                 movimentoRainha(casas -1);
           
      
    }
}
int main() {
    
                         movimentoTorre(5 );
                    printf("\n");
                 movimentoBispo(5);
             printf("\n");
          movimentoRainha(8);
        printf("\n");
        
                          printf("Movimento do Cavalo :\n");
                    for (int i = 1; i < 3; i++) {
             if (i == 3) continue; 
          if (i == 3) break;                
      printf("\n%d casa para cima ", i);
    }

                         for (int i = 1; i < 2; i++) {
                     if (i == 2) continue; 
             if (i == 2) break;    
       printf("\n%d para direita ", i);
    }
   


    return 0;
}

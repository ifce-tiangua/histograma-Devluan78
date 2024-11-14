#include <stdio.h>
#include <stdlib.h>

int imprime_historograma(int** vendas,int num_categorias);

int main(){

      int num_categorias;
      scanf("%d",&num_categorias);
    
     int **vendas = (int**)malloc(num_categorias*sizeof(int*));

     for(int i = 0;i<num_categorias;i++){
        vendas[i] = (int*)malloc(sizeof(int));

        scanf("%d",vendas[i]);
     }

     imprime_historograma(vendas,num_categorias);

     for(int i=0;i<num_categorias;i++){
         free(vendas[i]);
     }
      free(vendas);

    return 0;
}
int imprime_historograma(int** vendas,int num_categorias){

   int i;
   for(i=0;i<num_categorias;i++){
       printf("%d ",*vendas[i]);
       if(*vendas[i]>0){
        for(int j=0;j<*vendas[i];j++){
            if(*vendas==0){
                printf("%d\n",*vendas[i]);
            }if(*vendas == NULL){
                printf("vazio");
            }
             printf("*");
        }
       }
       printf("\n");
   }
}

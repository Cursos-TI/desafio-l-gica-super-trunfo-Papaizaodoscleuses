#include <stdio.h>

struct carta{

      char codigo[10];
      int populacao;
      float area;
      float PIB;
      int pontosTuristicos;
};

int main(){

struct carta carta1, carta2;

         printf("\n=== cadastro da carta 1 ===\n");
         printf("codigo \n");
         scanf("%s", carta1.codigo);
         printf("população \n");
         scanf("%d\n", carta1.populacao);
         printf("area \n");
         scanf("%f\n", carta1.area);
         printf("PIB \n");
         scanf("%f\n", carta1.PIB);
         printf("pontos Turisticos \n");
         scanf("%d\n", carta1.pontosTuristicos);


         printf("\n=== cadastro da carta 2 ===\n");
         printf("codigo \n");
         scanf("%s\n", carta2.codigo);
         printf(" população \n");
         scanf("%d\n", carta2.populacao);
         printf(" area \n");
         scanf("%f\n", carta2.area);
         printf(" PIB\n");
         scanf("&f\n", carta2.PIB);
         printf(" pontos Turisticos\n");
         scanf("%d\n", carta2.pontosTuristicos);

         printf("\n=== dados das cartas cadastradas ===\n");


         printf("\n carta1: \n ");
         printf("codigo1:%s\n", carta1);
         printf("população1: %d\n", carta1);
         printf("area1: %f\n", carta1);
         printf("PIB: %f\n", carta1);
         printf("pontos Turisticos: %d\n",carta1);

         printf("\n carta 2: \n");
         printf(" codigo: %s\n", carta2);
         printf(" população : %d\n", carta2);
         printf(" area : %F\n", carta2);
         printf(" PIB: %f\n", carta2);
         printf(" pontos Turisticos: %d\n", carta2);










return 0;
}



#include <stdio.h>
#include "affichage.h"

void afficheHadamard(int ** matH, int tailleMat){
   for(int k = 0; k < tailleMat; k++){
      printf("+---");
   }
   printf("+\n");
   for(int i = 0; i < tailleMat; i++){
      for(int j = 0; j < tailleMat; j++){
         if(matH[i][j] > 0){
            printf("| %d ",matH[i][j]);
         }else{
            printf("|%d ",matH[i][j]);
         }
      }
      printf("|\n");
      for(int k = 0; k < tailleMat; k++){
         printf("+---");
      }
      printf("+\n");
   }
   printf("\n");
}

void afficheTabInt(int tab[], int taille){
	for(int i = 0; i < taille; i++){
      printf("%2d ", tab[i]);
   }
   printf("\n");
}

void afficheSeparateur(){
	printf("\n===========================\n");
}

#include <stdlib.h>
#include <stdio.h>
#include "gold.h"

int xor(int a,int b){
    return ((a && !b) || (!a && b));
}



void codeurLongueurMax(int * polyGen, int taille, int * registres){  // realise un codage
    int resultXor = -1;                                                  //de gold, neccesite les plynome de Générétion, la taille et les registres initialisé
    int i,j;
    for(i=0; i < taille ; i++){
      for(j = 0; polyGen[j] != '\0'; j++){
        if( i == polyGen[j]){
          if(resultXor == -1){
            resultXor = registres[i];
          }else{
            resultXor = xor(resultXor,registes[i]);
          }
        }
      }
    }
    decalage(resultXor,registres);
}

void decalage(int resultXor, int * registres){

  int i,j,k;
  j = registres[0]
  registres[0] = resultXor;
  for(i = 1;registres[i] != '\0';i++){
    k = registres[i];
    registres[i] = j;
    j = k;
  }
}
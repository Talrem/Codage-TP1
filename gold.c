#include <stdlib.h>
#include <stdio.h>

initRegistres(int * registres, taille){

  for(i = 0; i < taille; i++){
    registres[i] = 1;
  }
}

void codeurGold(int * cases, int taille, int nbDecalage){
    int * registres[taille] = malloc(sizeof int * taille);
    int i;

    initRegistres(registres,taille);
}

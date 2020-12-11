#include <stdlib.h>
#include <stdio.h>

/*initRegistres(int * registres, taille){ // initialise les registres à 1 pour que l'encodeur puisse démarer

  for(i = 0; i < taille; i++){
    registres[i] = 1;
  }
}*/

int xor(int a,int b){
    return ((a && !b) || (!a && b));
}



void codeurGold(int * polyGen, int taille, int * registres){  // realise un codage
    int resultXor = -1;                                                  //de gold, neccesite les plynome de Générétion, la taille et les registres initialisé
    int i,j;
    for(i=0; i < taille ; i++){
      for(j = 0; polyGen[j] =! '\0'; j++){
        if( i == polyGen[j]){
          if(resultXor == -1){
            resultXor = registres[i];
          }else{
            resultXor = xor(resultXor,registes[i]);
          }
        }
      }
    }
}

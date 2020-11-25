#include "hadamard.h"
#include <stdlib.h>
#include <stdio.h>

int fusionnerMatrices(
    int taille, int tailleFinale,
    int **matriceFinale[][tailleFinale],
    int ** matrice1[][taille],
    int ** matrice2[][taille],
    int ** matrice3[][taille],
    int ** matrice4[][taille]
){
    for(int i = 0; i < tailleFinale ; i++){
        printf("%d",taille);
    }
    return 0;
}

int genererHadamard(int tailleMatrice, int ** mat[][tailleMatrice]){
    if(tailleMatrice > 1){// 4 8 16
        int ** mat[tailleMatrice/2][tailleMatrice/2];
    }
    return 0;
}

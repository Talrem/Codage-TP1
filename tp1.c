#include <stdlib.h>
#include <stdio.h>

int calculerTailleMatrice(int nbUtilisateur){
    switch(nbUtilisateur){
        case 1:
        case 2:
            return 2;
        break;
        case 3:
        case 4:
            return 4;
        break;
        case 5:
        case 6:
        case 7:
        case 8:
            return 8;
        break;
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            return 16;
        break;
        default:
            printf("Erreur nombre d'utilisateur non géré.");
        break;
        exit(-1);
    }
    return 0;
}

int fusionnerMatrices(
    int taille, int tailleFinale,
    int matriceFinale[][tailleFinale],
    int matrice1[][taille],
    int matrice2[][taille],
    int matrice3[][taille],
    int matrice4[][taille]
){
    for(int i = 0; i < tailleFinale ; i++){
        printf("%d",taille);
    }
    return 0;
}

extern int genererHadamard(int tailleMatrice, int mat[][tailleMatrice]){
    if(tailleMatrice > 1){// 4 8 16
        int ** mat[tailleMatrice/2][tailleMatrice/2];
    }
    return 0;
}

int main(int argc, char* argv[]){
    int nbUtilisateurs = 0;
    if(argc < 2){
        printf("Attente d'un paramètre : <Nombre_D_Utilisateurs>\n");
        system("pause");
        return 0;
    }
    nbUtilisateurs = atoi(argv[1]);
    int tailleMatrice = calculerTailleMatrice(nbUtilisateurs);
    printf("Taille Matrice : %d\n",tailleMatrice);
    system("pause");
    int mat[tailleMatrice][tailleMatrice];
    genererHadamard(tailleMatrice,mat);
    system("pause");
}

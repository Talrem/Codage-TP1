#include <stdlib.h>
#include <stdio.h>

int calculerTaille mat(int nbUtilisateur){
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

int fusionnerMats(
    int taille, int tailleFinale,
    int  matFinale[][tailleFinale],
    int  mat1[][taille],
    int  mat2[][taille],
    int  mat3[][taille],
    int  mat4[][taille]
){
    for(int i = 0; i < tailleFinale ; i++){
        for(int j = 0; j < tailleFinale ; j++){
            switch(true){
                case ( !(i > taille) && !(j > taille) ) :/*top left*/
                    for(int c = 0; c < taille; c++){
                        for(int d = 0; d < taille; d++){
                            matFinale[i][j] = mat1[c][d];
                        }
                    }
                break;
                case ( (i > taille) && !(j > taille) ) :/*top right*/
                    for(int c = 0; c < taille; c++){
                        for(int d = 0; d < taille; d++){
                            matFinale[i][j] = mat2[c][d];
                        }
                    }
                break;
                case ( !(i > taille) && (j>taille) ) :/*bot left*/
                    for(int c = 0; c < taille; c++){
                        for(int d = 0; d < taille; d++){
                            matFinale[i][j] = mat3[c][d];
                        }
                    }
                break;
                case ( (i > taille) && (j > taille) ) :/*bot right*/
                    for(int c = 0; c < taille; c++){
                        for(int d = 0; d < taille; d++){
                            matFinale[i][j] = mat4[c][d];
                        }
                    }
                break;
            }
        }
    }
    return 0;
}

extern int genererHadamard(int taille mat, int mat[][taille mat]){
    if(taille mat > 1){// 4 8 16
        int ** mat[taille mat/2][taille mat/2];
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
    int taille mat = calculerTaille mat(nbUtilisateurs);
    printf("Taille  mat : %d\n",taille mat);
    system("pause");
    int mat[taille mat][taille mat];
    genererHadamard(tailleMat, mat);
    system("pause");
}

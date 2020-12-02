#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "hadamard.h"


void initMat(int **mat,int taille){
    for(int i=0;i<taille;i++){
        for (int j = 0; j < taille; j++) {
            mat[i][j]=1;
        }
    }
}

/* programme pow qui renvoie un type int */
int pow1(int n,int p){
    int x=n;
    for(int i=1;i<p;i++)
    x=x*n;
    return x;
}

/* programme qui retourne l'inverse de pow 2 ex: 8 => 3 ( 2³) */
int pow2(int n){
    int i;
    for(i=1;n!=2;i++){
        n/=2;
    }
    return i;
}

/*calcule la taille de la matrice en fonction du nombre d'utilisateur*/
int tailleMat(int nbUser){
    int cpt=0;
    int p=0; /*puissance de 2 */
    int taille=pow1(2,p); /*dimension de la matrice d'hadamard*/

    if(nbUser == 1)
    return 1;
    else if(nbUser == 2)
    return 2;
    else if( nbUser == 3)
    return 4;
    else {
        while(cpt <= nbUser){

            if(taille<cpt){
                p++;
                taille = pow1(2,p);
            }

            cpt++;

        }

        return taille;
    }
}

void genereHadamard(int ** hada, int n){

    /* int H1[2][2]={ {1, 1},
    {1,-1}};*/
    int taille = n;
    int init=0,x1,y1;
    int cmpt=1,cmptX,cmptY,compt=2;


    if(n == 2){
        hada[1][1] = -1;
    } else {

        while(cmpt < pow2(n) ){
            for(x1=0,cmptX=0; cmptX<compt ;x1+=taille,cmptX++){
                for(y1=0,cmptY=0; cmptY<compt ;y1+=taille,cmptY++){

                    if(!init && y1 != 0){
                        y1 = 0;
                        cmptY--;
                        init = 1;
                    }

                    for (int i=0;i<taille;i++){

                        for(int j=0;j<taille;j++){
                            if(i+1>taille/2 && j+1>taille/2){
                                hada[i+x1][j+y1]*=-1;
                            } else {
                                hada[i+x1][j+y1]*=1;
                            }
                        }
                    }

                    if( x1==0 && y1 == 0 && !init)
                    taille/=2;
                }
            }
            taille/=2;
            cmpt++;
            compt*=2;
        }
    }

}


int selecteur(int n){
    //Cherche une case libre dans un tableau et en donne l'indice si possible

    static int first_time = 0;
    static int tab[MAX_TAB];

    if(first_time == 0){
        for(int i = 0; i < MAX_TAB; i++)
        tab[i] = -1;
        first_time = 1;
    }

    int i;
    int case_test;

    for(i = 0; i < n && tab[i] != -1; i++){}

    if(i == n)
    return -1;

    //recherche de case vide
    while(1){
        case_test = rand()%n;
        if(tab[case_test] == -1){
            tab[case_test] = case_test;
            return case_test;
        }
    }
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <unistd.h>
#include "hadamard.h"
#include "affichage.h"
#include "recepteur.h"
#include "canal.h"


int main(){

	int nbUsers = 4;
	int taille = 4;
	int ** matHadamard;
	int numSequence=0;
	int N = 3;

	srand(time(NULL));

	printf("Veuillez rentrer le nombre d'utilisateurs : ");

	scanf("%d",&nbUsers);
	taille = tailleMat(nbUsers);

	//mot envoye par l'utilisateur
	int mot[N];
	//tableau contenant la sequence codee
	int sequence[taille];
	//tableau contenant le mot code
	int code[taille*N];

	//Generation de la sequence aleatoire
	for(int i=0;i<N;i++){
		mot[i] = rand()%2;
	}

	printf("La sequence qui a ete generee est : ");
	for(int i=0;i<N;i++){
		printf(" %d ",mot[i]);
	}
	printf("\n");

	// Allocation memoire
	matHadamard = (int **) malloc(taille * sizeof(int *));
	if(NULL == matHadamard){
		perror("Probleme de malloc sur la matrice hadamard");
		exit(EXIT_FAILURE);
	}

	for(int i = 0; i < taille; ++i){
		matHadamard[i] = (int *) malloc(taille * sizeof(int));
		if(NULL == matHadamard[i]){
			perror("Probleme de malloc sur une ligne de la matrice hadamard");
			exit(EXIT_FAILURE);
		}
	}

	/*Creation de la matrice*/
	initMat(matHadamard,taille);
	genereHadamard(matHadamard,taille);
	printf("\nLa matrice Hadamard de taille %d est :\n", taille);

	//Affichage de la matrice
	afficheHadamard(matHadamard,taille);

	//Attribution des sequences
	for(int utilisateur = 0; utilisateur < nbUsers; utilisateur++){

		/*selection d'une ligne libre au hasard*/
		if((numSequence = selecteur(taille)) == -1){
			perror("probleme selection ligne dans matrice hadamard");
			exit(EXIT_FAILURE);
		}

		for(int i = 0; i < taille; i++){
			sequence[i]= matHadamard[numSequence][i];
		}
		printf("Le user %d utilise la sequence %d : \n", utilisateur+1, numSequence+1);
		afficheTabInt(sequence, taille);
		sleep(1);

		for(int a=0;a<N;a++){
			//chiffrement
			for(int z=0;z<taille*N;z++){
				if(mot[a] == 1)
				code[z]= sequence[z%taille];
				else
				code[z]= -1 * sequence[z%taille];
			}
		}

		printf("Voici la sequence codee : ");
		afficheTabInt(code, taille*N);

		afficheSeparateur();
	}

	//Liberation de la memoire
	for (int i = 0; i < taille; ++i)
	free(matHadamard[i]);
	free(matHadamard);

	system("pause");
	return 0;
}

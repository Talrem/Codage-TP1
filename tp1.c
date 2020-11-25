#include <stdlib.h>

int tailleMatrice?(int nbUtilisateur){
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
            printf("");
        break;
        exit(-1);
    }
}

int main(int argc, char* argv[]){

}

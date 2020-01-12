#include <stdio.h>
#include <stdlib.h>

/*
 Ennonce de l'exercice 
 Ecrire un programme qui saisit deux entier et qui affiche leurs somme
 */

int additions(int val1, int val2) ; 
int main(int argc, char *argv[])
{
    int valeurA = 0;
    int valeurB = 0;
    printf("Calculer la somme de deux nombre") ; 
    printf("Entret la premier valeur 'VALEUR A' ") ; 
    scanf("%d",&valeurA);
    printf("Entret la premier valeur 'VALEUR B' ") ; 
    scanf("%d",&valeurB);
   
    printf("La somme de %d+%d=%d",valeurA,valeurB, additions(valeurA,valeurB));
    return 0;
}
int additions(int val1, int val2)
{
    return val1 + val2 ; 
}

 
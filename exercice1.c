#include <stdio.h>
#include <stdlib.h>

/*
 Ennonce de l'exercice 
Calculer le quotien d'un nombre
 */

int additions(int val1, int val2) ; 


int main(int argc, char *argv[])
{
    int valeurA = 0;
    int valeurB = 0;
    printf("Multiplication de deux nombres\n") ; 
    printf("ajouter la valeur 'A' au clavier \n") ; 

    scanf("%d",&valeurA);
    printf("ajouter la valeur 'B' au clavier \n") ; 
    scanf("%d",&valeurB);
   
    printf("La quotient de %d*%d=%d",valeurA,valeurB, additions(valeurA,valeurB));
      system("pause");
    return 0;
}
int additions(int val1, int val2)
{
    return val1 * val2 ; 
}

 
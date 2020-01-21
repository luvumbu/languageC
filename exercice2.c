#include <stdio.h>
#include <stdlib.h>

/*
 Ennonce de l'exercice 
Ecrire un programme qui échange deux entier saisi
 */
int echange(int val1, int val2,int val3) ; 
int main(int argc, char *argv[])
{
    int valeurA = 0 ;  // initiation de la variable A
    int valeurB = 0 ;  // initiation de la variable B
    int valeurC = 0 ;  // initiation de la de stockage elle permet de sauvegarder les valeur provisoirement 
    printf("Entrer la valeur de A\n") ;  
    scanf("%d",&valeurA);
    printf("Entrer la valeur de B\n") ;  
    scanf("%d",&valeurB);
    echange(valeurA,valeurB,0) ; 
      system("pause");
    return 0;
}



    int echange(int val1, int val2,int val3)
{
    printf("A = %d et B= %d \n",val1,val2) ; 
    val3 = val1 ; 
    val1 = val2 ; 
    val2 = val3 ; 
    printf("Et maintenant A = %d et B= %d \n",val1,val2) ; 
    return 0;
} 
 
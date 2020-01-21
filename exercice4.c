#include <stdio.h>
#include <stdlib.h>

// Ecrire un programme qui renvois la valeur d'un nombre paire ou impraire
 int nombrespoi(int nombre)  ; 
int main(int argc, char *argv[])
{
int val = 0; 
printf("Entrer la valeur du nombre à verifier\n") ; 
scanf("%d",&val);
nombres(val);
return 0;
 

int nombrespoi(int nombre)
{

    int resultat = nombre%2;
    if(resultat==0)
    {
        printf("Le nombre est  paire");
    }
    else 
    {
        printf("Le nombre est  impaire");
    }
    return nombre%2;

}
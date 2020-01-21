#include <stdio.h>
#include <stdlib.h>

// Ecrire un programme qui affiche un code ascii valeur decimal et valeur exadecimal
int monMax(int valeurEntre1,int valeurEntre2, int valeurEntre3) ; 
int main(int argc, char *argv[])
{
int val1 = 0; 
int val2 = 0; 
int val3 = 0; 
printf("Saissir valeur 1\n") ; 
scanf("%d",&val1) ;
printf("Saissir valeur 2\n") ; 
scanf("%d",&val2) ;
printf("Saissir valeur 3\n") ; 
scanf("%d",&val3) ;
/*
int tableau[3];
tableau[0] = val1;
tableau[1] = val2;
tableau[2] = val3;
*/
monMax(val1,val2,val3) ;
  system("pause");
return 0;
}

int monMax(int valeurEntre1,int valeurEntre2, int valeurEntre3)
{
    if(valeurEntre1>valeurEntre2 && valeurEntre1>valeurEntre3)
    {
        printf("LA Valeur entre n1 est la plus grande\n",valeurEntre1) ; 
    }

        if(valeurEntre2>valeurEntre1 && valeurEntre1>valeurEntre3)
    {
        printf("LA Valeur entre n2 est la plus grande\n",valeurEntre2) ; 
    }
        if(valeurEntre3>valeurEntre2 && valeurEntre3>valeurEntre1)
    {
        printf("LA Valeur entre n3 est la plus grande\n",valeurEntre3) ; 
    }
        if(valeurEntre1<valeurEntre2 && valeurEntre1<valeurEntre3)
    {
        printf("LA Valeur entre n1 est la plus petite\n",valeurEntre1) ; 
    }

        if(valeurEntre2<valeurEntre1 && valeurEntre1<valeurEntre3)
    {
        printf("LA Valeur entre n2 est la plus petite\n",valeurEntre2) ; 
    }
        if(valeurEntre3<valeurEntre2 && valeurEntre3<valeurEntre1)
    {
        printf("LA Valeur entre n3 est la plus petite\n",valeurEntre3) ; 
    }
}
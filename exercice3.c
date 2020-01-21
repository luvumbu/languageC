#include <stdio.h>
#include <stdlib.h>

// Ecrire un programme qui affiche un code ascii valeur decimal et valeur exadecimal

int main(int argc, char *argv[])
{
    char lettre = 0;

    scanf("%c", &lettre);  
    printf("Valeur entre au clavier = %c\n", lettre);
    printf("LA valeur decimal est de =%d\n", lettre);
    printf("Valeur exadecimal %x \n",lettre);
       

  system("pause");
    return 0;
}
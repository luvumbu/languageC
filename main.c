//  NSY103, Linux Ndenga luvumbu 2020 
#include<stdio.h> // ajout des bibliotheques
#include<stdlib.h> // ajout des bibliotheques

int main(int argc, char *argv[]) // debut du projet
{
    printf("Fonctionalites\n") ; 
    printf("-----------------------------------") ; 
    printf("\n Entrer dans le menu principal\n") ; 
    printf("\n Programme N-1 ; Addition de deux nombres entre au clavier ") ; 
    printf("\n Programme N-2 ; Echange de deux nombre entier saisi") ;  
    printf("\n Programme N-3 ; Donne le nombre le plus grand entre au clavier et le plus petit") ; 
    printf("\n Programme N-4 ;  Donne le résultat du nombre si il est paire ou impaire") ;
    printf("\n Programme N-5 ;  Convertisseur degre en radiant") ;
    printf("\n---Entrer le numero du programme souhaitee---\n");
    // informations pour l'utilisateur 
    int additions(int val1, int val2) ; 
    int echange(int val1, int val2,int val3) ; 
    int monMax(int valeurEntre1,int valeurEntre2, int valeurEntre3) ; 
    double convertisseurRadiant(double a )  ;
    double convertisseurDegre(double a)  ;
    int nombrespoi(int nombre);
        // récuperation des fonctionspour intregrer au programme  sans cette initiation le programme ne fonctionne pas 
    char lettre = 0;
    char clavier = 0;
    int valeurA = 0 ;  // initiation de la variable A
    int valeurB = 0 ;  // initiation de la variable B
    int valeurC = 0 ;  // initiation de la de stockage elle permet de sauvegarder les valeur provisoirement 
    double a = 0 ; 
    // initialisation des quelques variables  !! 
    scanf("%c", &lettre);
    printf("%c\n", lettre);
    if(lettre=='1')
    {
        printf("Calculer la somme de deux nombre\n") ; 
        printf("Entrer la valeur n-1\n") ; // affiche information a l'utilisateur 
        scanf("%d",&valeurA); // demande la valeur a l'utilisateur et l'estoque dans une variable A de type entier
        printf("Entrer la valeur n-2\n") ; // affiche information a l'utilisateur 
        scanf("%d",&valeurB);    // demande la valeur a l'utilisateur et l'estoque dans une variablee A de type entier
        printf("La somme de %d+%d=%d\n",valeurA,valeurB, additions(valeurA,valeurB));   // affiche la somme du resultat
        system("pause");
    }
        if(lettre=='2') // Permutation des variables 
    {
        printf("Entrer la valeur de A\n") ;  
        scanf("%d",&valeurA); // demande de saissi a l'utilisateur 
        printf("Entrer la valeur de B\n") ;  // infoormation de l'utilisateur 
        scanf("%d",&valeurB); // demande de saissi a l'utilisateur 
        echange(valeurA,valeurB,0) ; // execution du programme et affichage d'information 
        system("pause");
    }
        if(lettre=='3')
    {
        int val1 = 0; // création des variables   ; 
        int val2 = 0; // création des variables   ; 
        int val3 = 0; // création des variables   ; 
        printf("Saissir valeur 1\n") ;// information utilisateur 
        scanf("%d",&val1) ;// demande de saissi a l'utilisateur 
        printf("Saissir valeur 2\n") ; 
        scanf("%d",&val2) ;// demande de saissi a l'utilisateur
        printf("Saissir valeur 3\n") ; 
        scanf("%d",&val3) ;// demande de saissi a l'utilisateur
        monMax(val1,val2,val3) ;      
        system("pause"); 
    }
        if(lettre=='4')// retournee si un nombre est paire ou impaire
    {
        int val = 0; 
        printf("Entrer la valeur du nombre à verifier\n") ; // information utilisateur   ; 
        scanf("%d",&val);
        nombrespoi(val);
        system("pause");
        return 0;
    }

            if(lettre=='5')// retournee si un nombre est paire ou impaire
    {
         printf("Entre du programme ok ") ; 

        printf("Menu principal\n") ; // information utilisateur   ; 
        printf("Taper 1 pour converti degre en radiant\n") ; // information utilisateur   ; 
        printf("Taper 2 pour converti radiant en degre en radiant\n") ; // information utilisateur   ; 
            double a;
        scanf("%lf",&a);
         if(a==1)
         {      
 
        printf("MEnu degrge en radiant\n") ; // information utilisateur   ; 
        double b;
        scanf("%lf",&b);
        printf("%lf",convertisseurRadiant(b)); 
        system("pause");      
        system("pause"); 
         }
         else 
         {  
                   
        printf("MEnu radiant en degre\n") ; // information utilisateur   ; 
        double b;
        scanf("%lf",&b);
        printf("%lf", convertisseurDegre(b));
        system("pause");
         }
         return 0;
    }
    int nombreEntre = 0; 
    return 0;   
}
 
int additions(int val1, int val2)
{
    return val1 + val2 ; 
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
int nombrespoi(int nombre)
{
    int resultat = nombre%2;
    if(resultat==0)
    {
        printf("Le nombre est  paire");// information utilisateur   ; 
    }
    else 
    {
        printf("Le nombre est  impaire");// information utilisateur   ; 
    }
    return nombre%2;
}
double convertisseurRadiant(double a) 
{
    return a*3.1415/180 ; 
}
 
double convertisseurDegre(double a) 
{
    return a*180/3.1415 ;
    
}
  

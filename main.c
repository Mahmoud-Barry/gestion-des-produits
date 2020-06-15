//by: MAHMOUD BARRY CUIM
#include <stdio.h>
#include <stdlib.h>
//declaration des constante
#define n 4
//declaration des structure
 struct produit
{
    int code;
    char designation[255];
    int qte;
    int qte_s;
};
typedef struct produit produit;
//declaration des prototype
void creation(produit tab_prod[],int m);
void affichage(produit tab_prod[],int m);
void rupture(produit tab_prod[],int m);
void modification(produit tab_prod[],int m);
void recherche(produit tab_prod[],int m);
main()
{
    //declaration des variblae
    int choix,test=0;
    produit tabprod[n];
    //le menu
    do
    {
        printf("1:creation du tableau de produit\n");
        printf("2:Affichage de tous les produits\n");
        printf("3:Affichage de tous les produits en rupture de stock\n");
        printf("4:Modification d'un produit\n");
        printf("5:Recherche d'un produit\n");
        printf("6:Quitter!");
        printf("faites votre choix:\n");
        scanf("%d",&choix);

        switch(choix)
        {
            case 1: system("cls");
            if(test==1)
            {
                printf("le tableau est deja cree");
                getch();
            }
            else{
              creation(tabprod,n);
            test=1;
            system("cls");
            printf("le tableau es bien cree!");
            getch();
            }

            break;
            case 2: system("cls");
            if(test==1)
            {
                affichage(tabprod,n);
            getch();
            }
           else
           {
               printf("le tableau n'est pas encore cree!");
               getch();
           }
            break;
            case 3: system("cls");
            if(test==1)
            {
                rupture(tabprod,n);
            getch();
            }
           else
           {
               printf("le tableau n'est pas encore cree!");
               getch();
           }
            break;
            case 4: system("cls");
             if(test==1)
            {
                modification(tabprod,n);
            getch();
            }
           else
           {
               printf("le tableau n'est pas encore cree!");
               getch();
           }
            break;
            case 5: system("cls");
             if(test==1)
            {
                recherche(tabprod,n);
            getch();
            }
           else
           {
               printf("le tableau n'est pas encore cree!");
               getch();
           }
            break;
            case 6:system("cls");
            printf("merci d'avoir utiliser le programme!:)");
            getch();
            break;
            default :system("cls");
                printf("choix non disponible!");
            getch();
        }system("cls");
    }while(choix !=6);


}
//les sous programme
//le code du sous programme qui cree le tabprod
void creation(produit tab_prod[],int m)
{
    //les varibles locaux
    int i;
    //le code qui permet de creer le tableau de produit
    for(i=0;i<m;i++)
    {
        tab_prod[i].code=i+1;
        printf("Veuillez saisir la designation du produit [%d]:\n",tab_prod[i].code);
        fflush(stdin);
        gets(tab_prod[i].designation);
        printf("Veuillez saisir la qunatite en stock du produit:\n");
        scanf("%d",&tab_prod[i].qte);
        printf("Veuillez saisir la quantite seuil du produit:\n");
        scanf("%d",&tab_prod[i].qte_s);
    }
}
//le code du sous programme qui affiche tous les produits
void affichage(produit tab_prod[],int m)
{
    //les varibles locaux
    int i;
    //le code qui permet d'afficher tous les produit
    for(i=0;i<n;i++)
    {
    printf("le code du produit:%d\n",tab_prod[i].code);
    printf("la designation du produit:%s\n",tab_prod[i].designation);
    printf("la quantite en stock du produit:%d\n",tab_prod[i].qte);
    printf("la quantite sueil du produit:%d\n",tab_prod[i].qte_s);
    }

}
//le code du sous programme qui affiche tous les produits en rupture de stock
void rupture(produit tab_prod[],int m)
{
    //les varibles locaux
      int i;
      //le code qui permet d'afficher les produit en rupture
    for(i=0;i<n;i++)
    {
        if(tab_prod[i].qte <= tab_prod[i].qte_s)
        {
            printf("le code du produit:%d\n",tab_prod[i].code);
            printf("la designation du produit:%s\n",tab_prod[i].designation);
            printf("la quantite en stock du produit:%d\n",tab_prod[i].qte);
            printf("la quantite sueil du produit:%d\n",tab_prod[i].qte_s);
        }

    }
}
//le code du sous programme qui modifie un produits
void modification(produit tab_prod[],int m)
{
    //les varibles locaux
 int code_rech,i;
 //le code qui permet de modifier un produit a partir de son code
 printf("veuillez saisir le code du produit a modifier ses information:\n");
 scanf("%d",&code_rech);
    for(i=0;i<n;i++)
    {
        if(tab_prod[i].code == code_rech)
        {
            printf("Veuillez saisir la designation du produit [%d]:\n",tab_prod[i].code);
        fflush(stdin);
        gets(tab_prod[i].designation);
        printf("Veuillez saisir la qunatite en stock du produit:\n");
        scanf("%d",&tab_prod[i].qte);
        printf("Veuillez saisir la quantite seuil du produit:\n");
        scanf("%d",&tab_prod[i].qte_s);
        }

    }
}
//le code du sous programme qui recherche un produits
void recherche(produit tab_prod[],int m)
{
    //les varibles locaux
   int code_rech2,i;
   //le code qui permet de rechercher un produit a partir de son code
 printf("veuillez saisir le code du produit a rechercher ses information:\n");
 scanf("%d",&code_rech2);
    for(i=0;i<n;i++)
    {
        if(tab_prod[i].code == code_rech2)
        {
        printf("le code du produit:%d\n",tab_prod[i].code);
            printf("la designation du produit:%s\n",tab_prod[i].designation);
            printf("la quantite en stock du produit:%d\n",tab_prod[i].qte);
            printf("la quantite sueil du produit:%d\n",tab_prod[i].qte_s);
        }

    }
}

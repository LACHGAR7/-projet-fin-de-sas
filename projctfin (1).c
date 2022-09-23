#include <stdio.h>
#include <stdio.h>
#include <string.h>

void menu();
void ajouterNouveauproduit();
void introduire_plusieurs_produit();
void affichage();


struct pharmacie
{
    char Nom[20] , code[20];
    int quantity;
    float prix;
};

struct pharmacie co[100];
int NPR = 0,nb  , f;
int main()
{
    int choix ;
    char on;
    system("CLS");

        do
        {

            menu();
            printf("Entrer Votre Choix : ");
            scanf("%d",&choix);

            switch (choix)
            {
                case 1 :
                {
                    system("CLS");
                    printf("\nBase de donnees de pharmacie\n");
                    printf("-------------------------------------\n");
                    introduire_plusieurs_produit();
                    break;
                }

                case 2 :
                {
                    system("CLS");
                    printf("liste des produit\n");
                    affichage();
                    break;
                }
                case 3 :
                {
                    exit(0);
                    break;
                }

                default:
                {
                    system("CLS");
                    menu();
                    break;
                }
            }

        } while (1);
    return 0;
}

void menu()
{
    printf("  Base de donnees de pharmacie\n");
    printf("----------------------------------\n");
    printf("1: Ajouter des produit\n");
    printf("2: Afficher la liste des produit\n");
    printf("3: QUITTER LAPPLICATION\n");
}

void ajouterNouveauproduit()
{
    struct pharmacie c;

    printf("\nEntrer Votre Nom: ");
    scanf(" %s",c.Nom);

    printf("\nEntrer Votre code : ");
    scanf(" %s",c.code);

    printf("\nEntrer Votre quantity : ");
    scanf(" %d",&c.quantity);
    rout:
    printf("\nEntrer Votre prix : ");
    scanf(" %f",&c.prix);
    if(c.prix<0) goto rout;
    co[NPR]=c;
    printf("\nproduit:\nNom :%s\ncode:%s \nquantity:%d \nprix:%.2f ",c.Nom , c.code ,c.quantity ,c.prix);
    NPR++;
}

void introduire_plusieurs_produit()
{
    printf("\nCOMBIEN DE PRODUIT VOULEZ-VOUS AJOUTER ?");
    scanf("%d",&nb);

    for (int j=1 ; j<=nb ; j++)
    {
        ajouterNouveauproduit();

    }

}
void affichage(){
struct pharmacie c;
    for(int i = 0 ; i < NPR;i++){
    printf("\nproduit:\nNom :%s\ncode:%s \nquantity:%d \nprix:%.2f",co[i].Nom , co[i].code ,co[i].quantity ,co[i].prix);
    }
}




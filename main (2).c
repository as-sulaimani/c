#include <stdio.h> //biblio de in et out.
#include <stdlib.h> //biblio des fonction.
#include <string.h> //biblio de string.
int c =0; 
typedef struct{
	int code;
	char nom[30];
	int quantite;
	float prix;
}
produit;
produit arr[100];

typedef struct{
	int jour;
	int mois;
	int annee;
	int quantite;
}
date;
date tab[200];

int ajoutProduit(produit arr [],int i){ // POUR AJOUTER 1 PRDTS
	printf("\n entrer l'info du produit:");
	printf("\n entrer le code: ");
	scanf("%d", &arr[i].code );
	printf("\n entrer le nom: ");
	scanf("%s", arr[i].nom );
	printf("\n entrer la quantite:");
	scanf("%d", &arr[i].quantite);
	printf("\n entrer le prix:");
	scanf("%f", &arr[i].prix );
	i++;
	return i;
}
int ajoutPlusProduit(produit arr [],int c){ //Plsrs prdts
	int numProduits; //c  le compteur qui  change de case a case.
	int i;


	printf("\n\n entrer le nombre des produits: ");
	scanf("%d", &numProduits);
	printf("\n entrer les info des produits:");
	
 	for(i=c; i<(c+numProduits);i++){
		printf("\n\n\n entrer le code: ");
		scanf("%d", &arr[i].code );
		printf("\n entrer le nom: ");
		scanf("%s", arr[i].nom );
		printf("\n entrer la quantite:");
		scanf("%d", &arr[i].quantite);
		printf("\n entrer le prix:");
		scanf("%f", &arr[i].prix );
	
}
	
	c+=numProduits; //pour incrimenter le tableau
	return c;
}		
		void triPrix(produit arr[], int c)  {
			int j,i = 0;
			for (i = 0; i < c; i++)      // boucle de tri n fois.
		    {
		      int j = 0;
		      for (j = 0; j < c; j++){    //lboucle de tri une fois 
		      	 if (arr[j].prix < arr[j + 1].prix)
					{produit p ;
					  p = arr[j + 1];
					  arr[j + 1] = arr[j];
					  arr[j] = p;
					}
			  }		     
		    }
		    for(i = 0; i < c; i++){
			  	printf("\n\n -> Le code de produit est : %d ",arr[i].code);
				printf("\n -> Le nom du produit est : %s ",arr[i].nom);
				printf("\n -> La quantite de produit est :  %d",arr[i].quantite);
				printf("\n -> Le prix du produit est : %.2f \n\n",arr[i].prix);	
			
		    }
		}
		

	

void AcheterProduit(produit arr[],int c)
{
	int i ; 
	int b = 0;
    int a;
    int code;
    printf("\n->entrer le code de produit: ");
    scanf("%d",&code);

    for(i=0;i<c;i++)   //boucle qui cherche le code dans le tableau.
    {
        if(arr[i].code == code)   // la condition if le code existe au tableau.
            {
                printf("-> Le nombre de produit que vous voulez acheter: ");
                scanf("%d", &a);
                if(a<=arr[i].quantite)     // condition if la quantite existe au stock.
                {
                    arr[i].quantite -= a ;   // condition de reduire les produits achetees du stock.
                    b++; //incrimenter la taille d'achat au tableau.
                }
                else
                    printf("\n\n-> cette quantite n'existe pas!!\n\n"); //conditionif le produit insufisant au stock.
            }
	}
}

void rechercheProduit(produit arr[],int c){
    int code;
    int i;
    printf("\n-> entrer le code du produit: ");
    scanf("%d", &code);
    for(i=0; i<c; i++){
        if (arr[i].code == code){
                printf("\n\n -> Le code de produit est : %d ",arr[i].code);
                printf("\n -> Le nom du produit est : %s ",arr[i].nom);
                printf("\n -> La quantite de produit est :  %d",arr[i].quantite);
                printf("\n -> Le prix du produit est : %.2f \n\n",arr[i].prix);
        return;
        }
        }
    printf("ce produit n'existe pas!!!");
}



int main (){
	
	
	int choix ; 	
	
	menu :
		printf("\n\n**Ajouter un nouveau produit  					1\n");
		printf("**Ajouter plusieurs produits  					2\n");
		printf("**Lister les produits         					3\n");
		printf("**Acheter un produit          					4\n");
		printf("**Rechercher un produit       					5\n");
		
		printf("Votre choix : ");
		scanf("%d",&choix);
	do{
	
		switch(choix){
			case 1:
				c = ajoutProduit(arr,c);
			break;
			
			case 2:
			  c = ajoutPlusProduit(arr,c);
			break;
			
			case 3:
				triPrix(arr, c);
			break;
			
			case 4:
				 AcheterProduit(arr,c);
			 break;
			 
			case 5:
				rechercheProduit(arr,c);
			break;
				
	}
			
			
		}while(choix<1,choix>6);
		goto menu;
}


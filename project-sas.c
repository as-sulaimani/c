#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	
	int code;
	char nom[500];
	int quantite;
	float prix;
	
} Produit;

int main(){
	Produit P[200];
	int N, i, j, choix, n, tmp;
	while(1){
		int choix;
		printf("**Menu Principal**\n");
		printf("\nPour inserer un nouveaux produit Entrer 1 ");
        printf("\nPour inserer plusieurs nouveaux produits Entrer 2  ");
        printf("\nPour afficher la liste des produit Entrer 3 ");
        printf("\nPour acheter un produit Entrer 4  ");
        printf("\nPour rechercher un produit Entrer 5 ");
        printf("\nPour afficher l'etat de stock Entrer 6  ");
        printf("\nPour alimenter le stock Entrer 7  ");
        printf("\nPour supprimer un produit Entrer 8 ");
        printf("\nPour afficher les statistique de vente en journee courante Entrer 9 ");
        printf("\nPour quitter Entrer 0  ");
        printf("\nVotre choix : ");
        scanf("%d",& choix);
        
        
    switch (choix){
        case 1: 											// pour entrer un produit:
        	printf("entrer le code du produit:");
        	scanf("%d", &P[i].code);
        		printf("entrer le nom du produit:");
        	scanf("%s", P[i].nom);
        		printf("entrer la quantite du produit:");
        	scanf("%d", &P[i].quantite);
        		printf("entrer le prix du produit:");
        	scanf("%d", &P[i].prix);
        	getch();
        	break;
        case 2:											//une boucle "for" pour plusieurs produits:
        	printf("entrer le nombre des produits: ");
        	scanf("%d", &n);
        	for (i=1; i<=n; i++){
        			printf("entrer le code du produit:");
        				scanf("%d", &P[i].code);
        		printf("entrer le nom du produit:");
        					scanf("%s", P[i].nom);
        		printf("entrer la quantite du produit:");
        					scanf("%d", &P[i]. quantite);
        		printf("entrer le prix du produit:");
        					scanf("%d", &P[i].prix);
			}
        	break;
        case 3:									    	//pour lister les produits:
   
 
		  for (i=0 ; i <N-1; i++){
		    for (j=0 ; j < N-i-1; j++){
		      if (P[j].prix < P[j+1].prix) {
		        tmp = P[j].prix;
		        P[j].prix = P[j+1].prix;
		        P[j+1].prix = tmp;
		    }
		      }
		    }
		    
		    		 for (i=0 ; i <N-1; i++){
		    			for (j=0 ; j < N-i-1; j++){
		      				if(strcmp(P[j].nom, P[j+1].nom) == 1){
		                       Produit temp = P[j];
		                       P[j] = P[j+1];
		                       P[j+1] = temp;
		                    }
    
        	break;
        case 4:										   //achat d'un produit:
		    
        	
        	
        	break;
        case 5:
        	break;
        case 6:
        	break;
        case 7:
        	break;
        case 8:
        	break;
        case 9:
        	break;
        case 10:
        	break;
    default : 
	printf("choix invalide\n");
}
	}
	
	
	
}
    

}
   
}

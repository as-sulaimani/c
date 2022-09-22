#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int jour;
    int mois;
    int annee;
}date;

typedef struct{
    int code;
    char nom[30];
    int quantite;
    float prix;
    int prixTax ;
    date;

}produits;

int main() {
	
	produits date;
	//reservé lia la taille dyall prduit 1 100 mra
	produits *data = malloc(100 * sizeof(produits));
	float *vend = malloc(100* sizeof(float));
	float *ventesTotales = malloc(100* sizeof(float));
	
	int prix;
	int achtParCode;
	int quantiteVendue;
	int ventesTotalesCounter;
	int choix;
	int nom[30];
	int quantite;
	int code;
	int i = 0;
	int j = 0;
	int z = 0;
	int c = 0;
	
	
	//le menu principale
	printf("1/ Ajouter un nouveau produit \n");
	printf("2/ Exit \n\n");
	printf("-> Votre choix : ");
	scanf("%d",&choix);
	
	//l'opération d'ajout de produit
	while(choix != 13){
		if(choix == 1){
			printf("-> Entrer le code du produit :");
			scanf("%d", &data[z].code);
			printf("\n-> Entrer le nom du produit : ");
			scanf("%s", &data[z].nom);
			printf("\n-> Entrer la quantite du produit : ");
			scanf("%d", &data[z].quantite);
			printf("\n-> Entrer le prix du produit :");
			scanf("%f", &data[z].prix);
			
			data[z].prixTax = data[z].prix + data[z].prix * data[z].prix / 100;
			z = z + 1;

		}
		
		//lister tous les produits selon l’ordre décroissant du prix.
		if(choix == 2){
			for(i = 0;i<z;i++){
				for(j = i+1;j<z;j++){
					if(data[i].prix < data[j].prix){
						prix = data[i].prix;
						//bdlna lvalue dyal nom blvalue li kyna f data[i].nom
						strcpy(nom,data[i].nom);
						quantite = data[i].quantite;
						code = data[i].code;
						
						data[i].prix = data[j].prix;
	                    strcpy(data[i].nom,data[j].nom);
	                    data[i].quantite = data[j].quantite;
	                    data[i].code = data[j].code;
	                    
	                    data[j].prix = prix;
	                    strcpy(data[j].nom,nom);
	                    data[j].quantite = quantite;
	                    data[j].code = code;
						
					}
				}
			}
			for(i = 0;i<z;i++){
				printf("\n\n -> Le code de produit est : %d ",data[i].code);
				printf("\n -> Le nom du produit est : %s ",data[i].nom);
				printf("\n -> La quantite de produit est :  %d",data[i].quantite);
				printf("\n -> Le prix du produit est : %.2f",data[i].prix);
			}
		}
		
		//acheter un produit
		if(choix == 3){
			printf("\n\n -> Entrer le code du produit : ");
			scanf("%d", &achtParCode);
			printf("\n -> Entrez la quantite de produit que vous souhaitez acheter : " );
			scanf("%d", &quantiteVendue);
			
			for(i = 0; i < z; i++){
				if(data[i].code == achtParCode){
					data[i].quantite = data[i].quantite - quantiteVendue;
					vend[c] = data[i].prix;
					ventesTotales[c] = data[i].prix * quantiteVendue;
					c++;
					printf("\n -> Le code de produit est : %s",data[i].nom);
					printf("\n -> La quantite du produit est : %d",data[i].quantite);
					printf("\n -> Le prix de produit est : %.2f",data[i].prix);
					printf("\n -> le produit %s vendu le %d-%d-%d",data[i].nom,date.jour,date.mois,date.annee);
				}
			}
		}
		//Rechercher des produits par code : 
		if(choix == 4){
			int counter = 0;
			printf("\n Entrer le code du produit : ");
			scanf("%d", &code);
			for( j = 0; j < z; j++){
				if(data[j].code == code){
					printf("\n\n -> le code de produit est : %d",data[j].code);
					printf("\n -> le nom de produit est : %s", data[j].nom);
					printf("\n -> la quantite de produit est : %d", data[j].quantite);
					printf("\n -> le prix de produit est : %.2f", data[j].prix);
				}else{
					counter++;
				}if (counter == z){
					printf("\n -> il n'y a pas de produit avec ce code!");
				}
			}
		}
		
//		Rechercher des produits par quantité
//		if(choix == 5) {
//			printf("\n -> Entrer la quantite du produit : ");
//			scanf("%d", &code);
//			for(j = 0; j < z; j++){
//				if(data[j].quantite - 3 <= data[j].quantite <= code){
//					printf("\n\n -> le code de produit est : %d",data[j].code);
//					printf("\n -> le nom de produit est : %s", data[j].nom);
//					printf("\n -> la quantite de produit est : %d", data[j].quantite);
//					printf("\n -> le prix de produit est : %.2f", data[j].prix);
//				}
//			}
//		}
		printf("\n\n1 - Ajouter un nouveau produit : ");
//	    printf("\n2 - List all products in ascending alphabetical order by name ");
	    printf("\n2 - Lister tous les produits par ordre decroissant de prix ");
	    printf("\n3 - Acheter un produit ");
	    printf("\n4 - Rechercher des produits par code");
	    printf("\n5 - Rechercher des produits par quantite");
	    printf("\n7 - add stock");
	    printf("\n8 - the total prices of products sold in the current day");
	    printf("\n9 - the Max price of products sold on the current day");
	    printf("\n10 - the min price of products sold on the current day");
	    printf("\n11 - the average price of products sold on the current day");
	    printf("\n12 - delete product");
	    printf("\n13 - exit : ");
	    printf("\nyour choice : ");
	    scanf("%d",&choix);
	}
	return 0;	
}
	
	


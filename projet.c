#include <stdio.h> // DYAL "IN" W "OUT"
#include <stdlib.h> // DYAL LES ALLOCATIONS DYNAMIQUE
#include <string.h> //DYAL UNE CHAINE DE CARACTERE

typedef struct{	
    int jour;
    int mois;
    int annee;
}date;

typedef struct prod{
		    int code;
		    char nom[30];
		    int quantite;
		    float prix;
		    int prixTtc ;
		    date;
}produit;

void ajouterProduit(produit * p , int size){   
	printf("entrer le nom du produit:\n");
	scanf("%s", p[size].nom);
	printf("entrer le code du produit:\n");
	scanf("%d",&p[size].code);
	printf("entrer le prix du produit:\n");
	scanf("%f",&p[size].prix);
	printf("entrer la qunatite du produit:\n");
	scanf("%d",&p[size].quantite);
	printf("\n");
	size++;
}
void ajouterPlusieProduit(produit * p , int size,int nbr){   
for(i=0;i<nbr;i++){
	printf("entrer le nom du produit:\n");
	scanf("%s", p[size].nom);
	printf("entrer le code du produit:\n");
	scanf("%d",&p[size].code);
	printf("entrer le prix du produit:\n");
	scanf("%f",&p[size].prix);
	printf("entrer la qunatite du produit:\n");
	scanf("%d",&p[size].quantite);
	printf("\n");
	}
}


produit* saisie (produit *p, int a, int b){
	int i;
	for (i=a; i<b ; i++){
		printf("entrer le nom du produit:\n");
		scanf("%s", p[i].nom);
		printf("entrer le code du produit:\n");
		scanf("%d",&p[i].code);
		printf("entrer le prix du produit:\n");
		scanf("%f",&p[i].prix);
		printf("entrer la qunatite du produit:\n");
		scanf("%d",&p[i].quantite);
		printf("\n");
	}
	return p;
}

		
		produit* affichage(produit *p,int n){
			int i;
		for(i=0; i<n; i++){
			printf("%d\n", p[i].code);
			printf("%s\n", p[i].nom);
			printf("%f\n", p[i].prix);
			printf("%d\n", p[i].quantite);
			printf("\n");			
			}
		}			
		produit* triPrix(produit *p, int n){
			int i,j;
			produit tmp;
			for(i=1; i<n; i++){
				for(j=0; j<n-1; j++){
				 if(p[j].prix<p[j+1].prix){
				 	tmp= p[j];
				 	p[j]= p[j+1];
				 	p[j+1]= tmp;
				 	
				 	}
				}
			}
			
			return p;
			
			
		}


produit* triNom(produit *p, int n){
	int i,j;
	produit tmp;
	for(i=1; i<n; i++){
		for(j=0; j<n-1; j++){
		 if(strcmp(p[j].nom,p[j+1].nom) == 1){
		 	tmp= p[j];
		 	p[j]= p[j+1];
		 	p[j+1]= tmp;
		 	
		 }
		}
	}
	
	return p;
}

/*date* achat(produit *p, date *d, int n, int s){
	int i,j;
	int quantite, code;
	printf("entrer le code du produit:\n");
	scanf("%d", &code);
	printf("donner la quantite du produit:\n");
	scanf("%d", &quantite);
	for (i=0; i<s; i++){
		if (p[i].code == code){
			p[i].quantite == quantite;
	print("entrer le jour:\n");
	scanf("%d", d[i].jour);
	print("entrer le mois:\n");
	scanf("%d", d[i].mois);
	print("entrer l''annee:\n");
	scanf("%d", d[i].annee);
	
	
		}
	}
}*/



int main(){
	int o,n=0,nbr,i;
	int choixTri;
	produit date;
	produit *p;
	p= malloc(n*sizeof(produit));	
			char name[20];
			int choix;
			int prix;
			int code;
			int quantite;						
do {
	printf("**Ajouter un nouveau produit  					1\n");
	printf("**Ajouter plusieurs produits  					2\n");
	printf("**Lister les produits         					3\n");
	printf("**Acheter un produit          					4\n");
	printf("**Rechercher un produit       					5\n");
	printf("**Afficher l'etat du stock    					6\n");
	printf("**alimenter le stock          					7\n");
	printf("**Supprimer un produit        					8\n");
	printf("**Total de vente de ce jour   					9\n");
	printf("**Moyenne de prix des ventes 					10\n");
	printf("**Le Max des prix des produits vendus  			11\n");
	printf("**Le Min des prix des produits vendus           12\n");
	scanf("%d",&choix);
	
switch (choix){
	case 1:
		n = 0;
	    if(n==0){
			o = 0;
			n = 1;
			p= malloc(n* sizeof(produit));
			p=saisie(p,o,n);
		}
		else {
			o = n;
			n += 1;
			p=realloc(p,n);
			p=saisie(p,o,n);
		}
	break;
	case 2:
		printf("entrer le nombre des produits : \n");
		scanf("%d", &nbr);
		if(n==0){
			o = n;
			n = nbr;
			p= malloc(n* sizeof(produit));
			p= saisie (p,o,n);
		}		
		else {
			o = n;
			n += nbr;
			p=realloc(p,n);	
			}
		break;
		
		case 3 :			
			printf("1 tri par nom \t 2 Tri par prix ");
			scanf("%d",&choixTri);			
			switch(choixTri){
				case 1: 
					p = triNom(p, n);
					break;
				case 2 :
					p = triPrix(p,n);
					break;
				default : 
					printf("Choix invalide \n");
					break;
			}
			affichage(p,n);
        break;
        
		case 4:
			printf("donner la date:\n");
			
			
	}
}
	
while(choix != 13);
	
	
	
	
}
	

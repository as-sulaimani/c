°*#include<stdio.h>
#include<stdlib.h>

void TriDecroissant(int *Z, int N){
int i,j;
int a;
 for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        if(*(Z+i)>*(Z+j)){
            a=*(Z+i);
            *(Z+i)=*(Z+j);
            *(Z+j)=a;
        }
    }
 }
    printf("les elements du tableau par ordre decroissant sont : \n");
        for(i=0;i<N;i++){
                printf("%d \n",*(Z+i));
        }
    printf("\n");
}

//tri par selection
void TriSelection(int *Z,int N){
    int i,j,index;
    int tmp=0;
 for(i=0;i<N;i++){
    index=i;
 for (j=i + 1; j < N; j++)
    {
      if (*(Z+index) > *(Z+j))
     index=j;

      if(index!=i){
        tmp=*(Z+j);
        *(Z+j)=*(Z+index);
        *(Z+index)=tmp;
             }
      }}
      printf("le tableau par ordre decroissant METHODE PAR SELECTION \n");
        for(i=0;i<=N-1;i++){
            printf("%d \t",*(Z+i));

        }

}
        
//Tri bulle
void TriBulle(int *Z, int N){
int i,j,tmp;
tmp=0;
for(i=0;i<=N-1;i++){
    for(j=i+1;j<=N-1;j++){
            if(*(Z+j)>*(Z+j)){
               tmp=*(Z+i);
               *(Z+i)=*(Z+j+1);
               *(Z+j+1)=tmp;
            }
    }
}
printf("\n le tableau par ordre decroissant METHODE A BULLE \n");
        for(j=0;j<=N-1;j++){
            printf("%d \t",*(Z+j));

        }
}   
     
     //Recherche dichotomie
int Recherche_dichotomie(int val,int *Z, int N){
    int debut=0;
    int fin=N-1;
    int milieu=(debut+fin)/2;
    while(*(Z+milieu)!=val && fin>debut){
        if(*(Z+milieu)>val){
            fin=milieu-1;
           // return milieu;
        }

        else
           {
            debut=milieu+1;
           }
           milieu=(debut+fin)/2;
      //  return milieu;
    }

    if(*(Z+milieu)==val)
        return milieu+1;
    return -1;
}

//Recherche simple
int Recherche_simple(int val,int *Z, int N){
    int i;
    for(i=0;i<N;i++){
        if(val==*(Z+i))
            return i;
    }
    return -1;
}

float moy(int *Z, int N){
	int i;
    float S=0,M;
   // float *Z;
  
	for (i=0;i<N;i++)
	{
		S = S + *(Z+i);
	}
	
	M=S/N;
	
	return M;
}



int main(void)
{
	int i,N,val;
	int *Z;
	Z = malloc (N *sizeof (int));
	
	printf("entrer le nombre d'etudiants : ");
	scanf("%d",&N);
    
	for (i=0;i<N;i++)
	{
		printf("Enter la note de l'etudiant %d: ",i+1);
		scanf("%d",Z+i);
	}
	
	float moyenne =  moy(Z,N);
	
	printf("La moyenne des notes des etudiants est : %.2f\n",moyenne);
	if (moyenne<10)
	printf("La moyenne de la classe est tres mauvaise.\n");
	else if (10<=moyenne<15)
	printf("La moyenne de la classe est acceptable. \n");
	else 
	printf("La moyenne de la classe est exellente.\n");
	TriDecroissant(Z,N);
	TriSelection(Z,N);
	TriBulle(Z,N);
	printf("\ninserer la valeur a rechercher\n");
    scanf("%d",&val);
	int Rd = Recherche_dichotomie(val,Z,N);
	printf("la position de votre dichotomie est : %d\n",Rd);
	return 0;
}

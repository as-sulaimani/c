#include<stdio.h>
#include<stdlib.h>

void TriCroissant(float *Z, int N){
int i,j;
float a;
 for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        if(*(Z+i)<*(Z+j)){
            a=*(Z+i);
            *(Z+i)=*(Z+j);
            *(Z+j)=a;
        }
    }
 }
    printf("les elements du tableau par ordre croissant sont : \n");
        for(i=0;i<N;i++){
                printf("%.2f \n",*(Z+i));
        }
    printf("\n");
}

float moy(float *Z, int N){
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
	int i,N;
	float *Z;
	Z = malloc (N *sizeof (float));
	
	printf("entrer le nombre d'etudiants : ");
	scanf("%d",&N);
    
	for (i=0;i<N;i++)
	{
		printf("Enter la note de l'etudiant %d: ",i+1);
		scanf("%f",Z+i);
	}
	
	float moyenne =  moy(Z,N);
	
	printf("La moyenne des notes des etudiants est : %.2f\n",moyenne);
	if (moyenne<10)
	printf("La moyenne de la classe est tres mauvaise.\n");
	else if (10<=moyenne<15)
	printf("La moyenne de la classe est acceptable. \n");
	else 
	printf("La moyenne de la classe est exellente.\n");
	TriCroissant(Z,N);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>






        
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

// void 

#include <stdio.h>
#define D 10
int main(){
    int j,i,N,c;
    int tab[i];
     printf("Entrer des nombres (max10) : ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("case [%d] : ",i+1);
        scanf("%d", &tab[i]);
    }
  
    printf("\n----Votre tableau triee----");
    do{
       c=0;
      for(i=0;i<=N-1;i++){
        if(tab[i]>tab[i+1]){
           int tmp;
           tmp=tab[i];
           tab[i]=tab[i+1];
           tab[i+1]=tmp;
           c++;
        }
      }
    }while(c>0);
    for(i=0;i<N;i++){
        printf("\n%d : %d",i+1,tab[i]);
       }
    }

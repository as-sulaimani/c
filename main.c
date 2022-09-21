#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int day;
    int month;
    int year;

}date;

typedef struct{
    int code;
    char name[30];
    int quantity;
    float price;
    int priceTax ;
    date;

}products;

int main()
{
    products date;
    products *data = malloc(100 * sizeof(products));
    float *sells  = malloc(100* sizeof(float));
    float *totalsells  = malloc(100* sizeof(float));


    int choice;
    int z = 0;
    int price;
    char name[30];
    int quantity;
    int code;
    int buyByCode;
    int quantitySold;
    int c  =0;
    int totalSellsCounter = 0;
    int j = 0;
    int i = 0;

    printf("1 - add new product : ");
    printf("\n2 - entre 2 to exit : ");
    printf("\nyour choice : ");
    scanf("%d",&choice);

    while(choice != 13){
    if (choice == 1){
        printf("entre product code : ");
        scanf("%d",&data[z].code);
        printf("entre product name : ");
        scanf("%s",&data[z].name);
        printf("entre product quantity : ");
        scanf("%d",&data[z].quantity);
        printf("entre product price : ");
        scanf("%f",&data[z].price);

        data[z].priceTax = data[z].price + data[z].price*data[z].price/100;
        z = z +1;
    }
    
    // list all products in descending order of price.
    if (choice == 3){
    	
        for( i = 0;i<z;i++){
            for( j = i+1;j<z;j++){
                if(data[i].price < data[j].price){
                    price = data[i].price;
                    strcpy(name,data[i].name);
                    quantity  = data[i].quantity;
                    code = data[i].code;

                    data[i].price = data[j].price;
                    strcpy(data[i].name,data[j].name);
                    data[i].quantity  = data[j].quantity;
                    data[i].code = data[j].code;

                    data[j].price = price;
                    strcpy(data[j].name,name);
                    data[j].quantity = quantity;
                    data[j].code = code;
                }
            }
        }
        for( i = 0;i<z;i++){
            printf("\n\nproduct code : %d\nproduct name : %s\nproduct quantity : %d\nroduct price : %.2f\n",data[i].code,data[i].name,data[i].quantity,data[i].price);
        }

    }
    if (choice == 4){
        printf("\nenter the product code :  " );
        scanf("%d",&buyByCode);
        printf("\nenter the product quantity that got sold :  " );
        scanf("%d",&quantitySold);
         for( i = 0;i<z;i++){
            if (data[i].code == buyByCode ){
                data[i].quantity = data[i].quantity - quantitySold;
                sells[c] = data[i].price;
                totalsells[c] = data[i].price * quantitySold;
                c++;
                printf("\n\nproduct code : %d\nproduct name : %s\nproduct quantity : %d\nroduct price : %.2f\n",data[i].code,data[i].name,data[i].quantity,data[i].price);
                printf("product %s sold at %d/%d/%d ",data[i].name,date.day,date.month,date.year);
            }
         }

    }

    if (choice == 5){
        int counter =0;
        printf("\nenter the product code : ");
        scanf("%d",&code);
        for( j = 0;j<z;j++){
            if(data[j].code == code){
                printf("\n\nproduct code : %d\nproduct name : %s\nproduct quantity : %d\nroduct price : %.2f\n",data[j].code,data[j].name,data[j].quantity,data[j].price);
            }else{
                counter++;
            }
            if (counter == z){
                printf("there is no product with that code");
            }
            }
    }

    if (choice == 6){
            printf("\nenter the product quantity : ");
            scanf("%d",&code);
            for( j = 0;j<z;j++){
                if(data[j].quantity -3 <=  data[j].quantity <= code){
                    printf("\n\nproduct code : %d\nproduct name : %s\nproduct quantity : %d\nroduct price : %.2f\n",data[j].code,data[j].name,data[j].quantity,data[j].price);
                }
                }
    }
    if (choice == 7){
            int counter = 0;
            printf("\nenter the product code : ");
            scanf("%d",&code);
            printf("\nenter the product quantity : ");
            scanf("%d",&quantity);
            for( j = 0;j<z;j++){
                if(data[j].code == code){
                    data[j].quantity = data[j].quantity + quantity;
                    printf("\n\nproduct code : %d\nproduct name : %s\nproduct quantity : %d\nroduct price : %.2f\n",data[j].code,data[j].name,data[j].quantity,data[j].price);
                }else{
                    counter++;
                }
                }
                if (counter == z){
                printf("there is no product with that code");
            }
    }
    if (choice == 8){
        for( i = 0;i<z;i++){
        totalSellsCounter  = totalSellsCounter + totalsells[i];
    }
    printf("%d",totalSellsCounter);
    }

    if(choice == 9){
        int max = 0;
        for( i = 0;i<c;i++){
                if (max<sells[i]){
                    max = sells[i];
            }
        }
        printf("the highest price of product sold on the current day : %d",max);
    }
    if(choice == 10){
        int min = sells[0];
        for( i = 1;i<c;i++){
                if (min>sells[i]){
                    min = sells[i];
            }
        }
        printf("the highest price of product sold on the current day : %d",min);
    }

    if(choice == 11){
        int store;
        for( i = 0;i<c;i++){
            for( j = i+1;j<c;j++){
                    if(sells[i]>sells[j]){
                           store =  sells[i];
                           sells[i] = sells[j];
                           sells[j] = store;
                    }
            }
        }

            printf("the average price of product sold on the current day : %f",sells[c/2]);
    }
    if (choice  == 12){
        int pos;
        int codeDP;
        printf("delete number : ");
        scanf("%d",&codeDP);
        for ( i = 0;i<z;i++){
            if (codeDP == data[i].code){
                pos = i;
                for ( i = pos ; i<z ;i++){
                    data[i].code = data[i+1].code;
                    strcpy(data[i].name,data[i+1].name);
                    data[i].quantity = data[i+1].quantity;
                    data[i].price = data[i+1].price;
                    z--;
                }

            }
        }
    }

    printf("\n\n1 - add new product : ");
    printf("\n2 - List all products in ascending alphabetical order by name ");
    printf("\n3 - list all products in descending order of price ");
    printf("\n4 - buy a product ");
    printf("\n5 - Search Products By code");
    printf("\n6 - Search Products By quantity");
    printf("\n7 - add stock");
    printf("\n8 - the total prices of products sold in the current day");
    printf("\n9 - the Max price of products sold on the current day");
    printf("\n10 - the min price of products sold on the current day");
    printf("\n11 - the average price of products sold on the current day");
    printf("\n12 - delete product");
    printf("\n13 - exit : ");
    printf("\nyour choice : ");
    scanf("%d",&choice);


    }

    return 0;
}

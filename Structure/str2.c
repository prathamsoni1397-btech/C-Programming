
#include<stdio.h>
#include<string.h>
struct bank{
    int acc;
    char name[100];
    int bal;
};

int main(){
    struct bank b[10];
    printf("Enter Details :- \n");
    for(int i=0;i<10;i++){
        printf("Customer :%d \n",i+1);

        printf("Enter Account Number : ");
        scanf("%d",&b[i].acc);

        printf("Enter Name : ");
        fflush(stdin);
        gets(b[i].name);

        printf("Enter Balance In Account : ");
        scanf("%d",&b[i].bal);

        printf("\n");
    }
        printf("\n");
        printf("Customer Which Balance Less Than 100 \n");
        printf("\n");
       for(int i=0;i<10;i++){
         if(b[i].bal<100){
        printf("Customer :%d \n",i+1);
        printf("Account Number : %d \n ",b[i].acc);
        
        printf("Name : %s \n",b[i].name);
    
        printf("Balance In Account : %d \n",b[i].bal);

        }
         printf("\n");
       }
       int n,dw,am,c,w;
       printf("Enter Account Number :");
       scanf("%d",&n);
       printf("1 for Deposite and 0 For Withdrwal:");
       scanf("%d",&dw);
       if(dw==1){
            printf("Enter Amount To Deposite :");
            scanf("%d",&am);
            for(int i=0;i<10;i++){
                if(n==b[i].acc){
                    b[i].bal=b[i].bal+am;
                    c=i;
                    break;
                }
            }
            printf("Total Amount :%d\n ",b[c].bal);
       }


       if(dw==0){
         printf("Enter Amount To Withdraw :");
         scanf("%d",&w);
         
            for(int i=0;i<10;i++){
                if(n==b[i].acc){
                    if(w>b[i].bal) printf("The balance is insufficient for the specified withdrawal");
                   else {
                    b[i].bal=b[i].bal-w;
                    c=i;
                   }
                   break;
                }
            }
            printf("Total Amount :%d\n ",b[c].bal);

       }
       return 0;

}

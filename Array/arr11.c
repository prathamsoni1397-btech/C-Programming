
#include<stdio.h>
int main() {
    int p,a[10],b[10],i,n;
    
    for(i=0;i<10;i++) {
        printf("Enter %d Number :",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter How Many Positions Need To Shift :");
    scanf("%d",&n);

    printf("Enter Left(1) or Right(2):");
    scanf("%d",&p);

    for(i=0;i<10;i++) {
        b[i] = 0;
    }
    if(p==1) { 
        for(i=0;i<10-n;i++) {
            b[i] = a[i+n];
        }
    }
    else if(p==2) { 
        for(i=n;i<10;i++) {
            b[i] = a[i-n];
        }
    }
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Output : \n");
    for(i=0;i<10;i++) {
        printf("%d ",b[i]);
    }

    return 0;
}

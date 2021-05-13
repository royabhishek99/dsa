#include<stdio.h>
#include<conio.h>

int main(){
    int n,i,a[20],pos,value;
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("Enter the elemts in that array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position at which you want the insertion to take place\n");
    scanf("%d",&pos);
    printf("Enter value to be added in position %d\n", pos);
    scanf("%d",&value);
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1] = value;
    printf("Modified Array is:\n");
    for(i=0;i<=n;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}
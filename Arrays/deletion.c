#include<stdio.h>
#include<conio.h>

int main(){
    int n,i,a[20],pos;
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("Enter the elemts in that array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position at which you want the deletion to take place\n");
    scanf("%d",&pos);
    if(pos==n+1){
        printf("Andhe Insaan :)\n");
    } else{
        printf("Modified Array is:\n");
        for(i=pos-1;i<n-1;i++){
            a[i]=a[i+1];
        }
        for(i=0;i<n-1;i++){
        printf("%d \t",a[i]);
        }   
    }
    return 0;
}
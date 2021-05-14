#include<stdio.h>

int main(){
    int l1=0,l2=0,i,n,a[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>l1){
            l2=l1;
            l1=a[i];
        }
        else if(a[i]<l1 && a[i]>l2){
            l2=a[i];
        }
    }
    printf("2nd largest number is %d ", l2);
    return 0;

}


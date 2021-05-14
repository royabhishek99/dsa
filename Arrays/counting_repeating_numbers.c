#include<stdio.h>

int main(){
    int a[100],n,i,j;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        int count = 1;
        for(j=i+1;j<n;j++){
            if(a[i]==0){
                continue;
            }
            if(a[i]==a[j]){
                count++;
                a[j]=0;
            }
        }
        if(count>1){
            printf("\nNumber %d has been repeated %d times\n", a[i],count);
        }
    }
    return 0;
}
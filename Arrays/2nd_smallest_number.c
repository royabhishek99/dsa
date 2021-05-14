#include<stdio.h>
#include<limits.h>

int main(){
    int i,n,a[100];
    int s1,s2= INT_MAX;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<s1){
            s2=s1;
            s1=a[i];
        }
        else if(a[i]>s1 && a[i]<s2){
            s2=a[i];
        }
    }
    printf("2nd smallest number is %d ", s2);
    return 0;

}


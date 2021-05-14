#include<stdio.h>

int main(){
    int a[100],n,temp,i,pos1,pos2,ind1,ind2;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the initial position to start the swapping procedure\n");
    scanf("%d",&pos1);
    printf("Enter the final position to end the swapping procedure\n");
    scanf("%d",&pos2);
    ind1=pos1-1;
    ind2=pos2-1;
    temp = *(a+ind1);
    *(a+ind1) = *(a+ind2);
    *(a+ind2) = temp;
    printf("The swapped result is\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

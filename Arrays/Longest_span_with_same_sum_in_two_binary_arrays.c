#include<stdio.h>

void longestSumSpan(int a1[100],int a2[100],int n){
    int maxLen=0;
    int i,j;
    for(i=0;i<n;i++){
        int s1=0,s2=0;
        for(j=i;j<n;j++){
            s1=s1+a1[j];
            s2=s2+a2[j];
            if(s1==s2){
                int len = j-i+1;
                if(len>maxLen){
                    maxLen=len;
                }
             }
        }
    }
    printf("%d",maxLen);
}

int main(){
    int i,a1[100],a2[100],n;
    printf("Enter the number of arrays to be inserted in the coming two arrays\n");
    scanf("%d",&n);
    printf("Enter the %d elements in the first array(0's and 1's only)\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter the %d elements in the second array(0's and 1's only)\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }
    printf("The longest span with the same sum in the provided array is: ");
    longestSumSpan(a1,a2,n);
    return 0;
}
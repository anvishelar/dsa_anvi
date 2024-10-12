#include<stdio.h>

int main(){
    int n,i,temp,j;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in array:\n");
    for(i=0;i<n;i++){
        printf("enter element %d :",i);
        scanf("%d",&a[i]);
    }
    printf("array is:");
    for(i=0;i<n;i++){
        printf("%d , ",a[i]);
    }
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d , ",a[i]);
    }

    return 0;
}
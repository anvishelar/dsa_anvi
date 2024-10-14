#include<stdio.h>

int main(){
    int n,i,key,j;
    printf("enter length of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        printf("enter element %d:",i);
        scanf("%d",&a[i]);
    }
    printf("the array is:\n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    //logic for insertion sort
    for(i=1;i<n;i++){  // i counts number of passes and since 1st element is single element in array therefore sorted array, no need to consider that pass
        key=a[i];
        for(j=i-1;j>=0;j--){  // j is basically last element of the sorted array. its the one that key is compared with
            if(a[j]>key){         // so thats why, for loop stops when j=0 or 
                a[j+1]=a[j]; 
            }else{
                break;
            }
        }
        a[j+1]=key;
    }
    printf("the sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    return 0;
}
#include<stdio.h>
int main() {
    int size,temp,minisum=0,maxsum=0,i;
    printf("Enter the size of array :-");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter the elments of array :-\n ");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++) {
        for(int j=0;j<size-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array\n");
    for(int i=0;i<size;i++) {
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<size-1;i++) {
        minisum=minisum+arr[i];
    }
    printf("mini sum =%d\n",minisum);
    for(int i=1;i<size;i++) {
         maxsum=maxsum+arr[i];
    }
    printf("max sum=%d",maxsum);
}
#include<stdio.h>
int main() {
    int n,temp,i;
    int arr[n];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    arr[n-1]=arr[0];
    arr[0]=temp;
    for(i=1;i<n-1;i++){
        int rot=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;
    }
    printf("rotated array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
#include<stdio.h>
int main() {
    int n,k,x;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    int arm[n];
    
    for(int i=0;i<n;i++) {
        arr[i]=i+1;
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
           
           arm[x] =arr[i] & arr[i+1] ;   
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
           arr[i] | arr[i+1] ;   
        }  
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
           arr[i] ^ arr[i+1] ;   
        }   
    }
}

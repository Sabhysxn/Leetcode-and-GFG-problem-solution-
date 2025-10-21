#include<stdio.h>
int main() {
    int n;
    int freq[10]={0};
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int max_freq=0;
    int min_freq=0;
    for(int i=0;i<n;i++) {
        freq[arr[i]]++;
        if(freq[arr[i]]>max_freq) {
            max_freq=arr[i];
        }
        else if( freq[arr[i]]==max_freq) {
            if(arr[i] > min_freq) {
                min_freq=arr[i];
            }
        }
    }
    printf("%d",max_freq);
    
}

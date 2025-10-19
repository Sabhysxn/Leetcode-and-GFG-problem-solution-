#include<stdio.h>
int main()
{
    int i,j,n;
    int arr[n],res[n];
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(arr[j]>arr[i])
        {
            res[i]=arr[j];
            break;
        }
      }
     
       if(j==n)
       printf("%d",res[i]); 
    }
    return 0;
}
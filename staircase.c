#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the value of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=i;j<rows;j++)
        {
            printf("  ");
        }
    for (int k=1;k<=i;k++) 
    {
        printf("# ");
    }
    printf("\n");
    }
}

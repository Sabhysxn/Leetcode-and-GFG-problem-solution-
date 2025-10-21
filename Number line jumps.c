// #include<stdio.h>
// int main() {
//     int x1,x2,v1,v2;
//     printf("Enter the value of x1 :- ");
//     scanf("%d",&x1);
//     printf("Enter the distance of v1 :- ");
//     scanf("%d",&v1);
//     printf("Enter the value of x2 :- ");
//     scanf("%d",&x2);
//     printf("Enter the distance of v2 :- ");
//     scanf("%d",&v2);

//     if(v1>v2 && (x2-x1) % (v2-v1)==0) {
//         printf("YES");
//     }
//     else {
//         printf("NO");
//     }
// }

#include <stdio.h>

int main() {
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    while (x1 < x2) {
        x1=x1+v1;  
        x2=x2+v2;  
        if (x1==x2) {
            printf("YES\n");
            return 0; 
        }
    }

    printf("NO\n");
    return 0;
}

// grading student by function


// #include<stdio.h>
// void gradingstudents(int grades[],int size) {
//     int temp;
//     for(int i=0;i<size;i++) {
//         int grade=grades[i];
//         if(grade<38) {
//         printf("%d\n",grade);
//     }
//     else {
//         temp=((grade/5)+1)*5;
//         if(temp-grade<3) {
//             printf("%d\n",temp);
//         }
//         else {
//             printf("%d\n",grade);
//         }
//     }
//   }
// }
// int main() {
//     int size;
//     printf("Enter the size of students : ");
//     scanf("%d",&size);
//     int grades[size];
//     printf("Enter the grade : ");
//     for(int i=0;i<size;i++) {
//         scanf("%d",&grades[i]);
//     }
//     gradingstudents(grades,size);
// }

// grading student without function

#include <stdio.h>
int main() {
    int size, i, temp;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Rounded grades:\n");
    for (i = 0; i < size; i++) {
        int grade = arr[i];
    if (grade < 38) {
            printf("%d\n", grade);  
        } else {
            temp = ((grade / 5) + 1) * 5;

            if (temp - grade < 3) {
                printf("%d\n", temp);  
            } else {
                printf("%d\n", grade);  
            }
        }
    }

    return 0;
}
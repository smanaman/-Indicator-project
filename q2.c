//  Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
// For example,
// Input:
// Enter array's size: 2

// Enter array elements:
// a[0][0] = 3
// a[0][1] = 2
// a[1][0] = 5
// a[1][1] = 4

// Output:
// Cubes of all elements:
// 27  8
// 125 64
#include<stdio.h>
void fudu(int *a,int size){


   
for(int i=0;i<size;i++){
    
       *(a + i) = (*(a + i)) * (*(a + i)) * (*(a + i));
}
}

int main(){
    int size;

    printf("Enter your number");
scanf("%d",&size);
int arr[size][size];
 printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

fudu(*arr,size*size);

    printf("Cubes of all elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
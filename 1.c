// // // // #include <stdio.h>

// // // // void main(){

// // // //     int a[5][4] = {

// // // //         {1,2,3,4},
// // // //         {5,6,7,8},
// // // //         {9,10,11,12},
// // // //         {13,14,15,16},
// // // //         {17,18,19,20}
// // // //     };

// // // //     int sum=0;

// // // //     for(int i=0 ; i<5 ; i++){

// // // //         for(int j=0 ; j<4 ; j++){
// // // //             sum+= a[i][j];
// // // //         }
// // // //     }
// // // //     printf("%d",sum);
// // // // }

// // // #include <stdio.h>

// // // void main()
// // // {

// // //     int rows, cols;

// // //     printf("Enter the size of rows :");
// // //     scanf("%d", &rows);

// // //     printf("Enter the size of columns :");
// // //     scanf("%d", &cols);

// // //     int a[rows][cols];

// // //     printf("Enter the elements of 2D array : \n ");
// // //     for (int i = 0; i < rows; i++)
// // //     {

// // //         for (int j = 0; j < cols; j++)
// // //         {

// // //             printf("a[%d][%d] =  ", i, j);
// // //             scanf("%d", &a[i][j]);
// // //         }
// // //     }

// // //     float sum = 0, avg;
// // //     int count = 0;

// // //     for (int i = 0; i < rows; i++)
// // //     {

// // //         for (int j = 0; j < cols; j++)
// // //         {

// // //             sum += a[i][j];
// // //             count++;
// // //         }
// // //     }

// // //     // printf("%d",count);
// // //     avg = sum / rows * cols;

// // //     printf("avg is : %f ", avg);
// // // }

// // #include <stdio.h>

// // void main()
// // {

// //     int size;

// //     printf("Enter the array's row & column size: ");
// //     scanf("%d", &size);

// //     int a[size][size];

// //     printf("Enter array's elements:\n");
// //     for (int i = 0; i < size; i++)
// //     {

// //         for (int j = 0; j < size; j++)
// //         {

// //             printf("a[%d][%d] = ", i, j);
// //             scanf("%d", &a[i][j]);
// //         }
// //     }

// //     int primaryDiagonalSum = 0;
// //     int secondaryDiagonalSum = 0;

// //     for (int i = 0; i < size; i++)
// //     {

// //         primaryDiagonalSum += a[i][i];
// //     }

// //     printf("The sum of diagonal elements of an Array: %d\n", primaryDiagonalSum);
// // }
// #include <stdio.h>

// #define SIZE 5

// int main()
// {
//     int a[SIZE][SIZE];
//     int sum = 0;

//     // Input the elements of the array
//     printf("Enter array's elements:\n");
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//             printf("a[%d][%d] = ", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Print the boundary elements and calculate their sum
//     printf("\nBoundary elements:\n");

//     // Top row
//     for (int j = 0; j < SIZE; j++)
//     {
//         printf("%d ", a[0][j]);
//         sum += a[0][j];
//     }
//     printf("\n");

//     // Right column (excluding first and last row)
//     for (int i = 1; i < SIZE - 1; i++)
//     {
//         printf("%*s%d\n", SIZE - 1, "", a[i][SIZE - 1]);
//         sum += a[i][SIZE - 1];
//     }

//     // Bottom row (in reverse)
//     for (int j = SIZE - 1; j >= 0; j--)
//     {
//         printf("%d ", a[SIZE - 1][j]);
//         sum += a[SIZE - 1][j];
//     }
//     printf("\n");

//     // Left column (excluding first and last row)
//     for (int i = SIZE - 2; i > 0; i--)
//     {
//         printf("%*s%d\n", SIZE - 1, "", a[i][0]);
//         sum += a[i][0];
//     }

//     // Print the sum of boundary elements
//     printf("The sum of boundary elements of an Array: %d\n", sum);

//     return 0;
// }
#include <stdio.h>

void main()
{

    int rows, cols;

    printf("Enter the size of rows :");
    scanf("%d", &rows);

    printf("Enter the size of columns :");
    scanf("%d", &cols);

    int a[rows][cols], b[rows][cols], c[rows][cols];

    printf("Enter the elements of 2D array(A) : \n ");
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {

            printf("a[%d][%d] =  ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 2D array(B) : \n ");
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {

            printf("b[%d][%d] =  ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Array c is : \n");
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>
 
#define ROW 5
#define COL 4
 
// A utility function to find min of two integers
int min(int a, int b)
{ return (a < b)? a: b; }
 
// A utility function to find min of three integers
int min(int a, int b, int c)
{ return min(min(a, b), c);}
 
// A utility function to find max of two integers
int max(int a, int b)
{ return (a > b)? a: b; }
void diagonalOrder(int matrix[][COL])
{
  

}
void printMatrix(int matrix[ROW][COL])
{
    for (int i=0; i< ROW; i++)
    {
        for (int j=0; j<COL; j++)
            printf("%5d ", matrix[i][j]);
        printf("\n");
    }
}
 
// Driver program to test above functions
int main()
{
    int M[ROW][COL] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12},
                       {13, 14, 15, 16},
                       {17, 18, 19, 20},
                      };
    printf ("Given matrix is \n");
    printMatrix(M);
 
    printf ("\nDiagonal printing of matrix is \n");
    diagonalOrder(M);
    return 0;
}
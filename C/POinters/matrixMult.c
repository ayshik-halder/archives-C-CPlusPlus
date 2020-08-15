#include <stdio.h>

int main()
{   
    int i,j;
    int mat1[100][100];
    int mat2[100][100];
    int product[100][100];

  
    printf("Enter elements in first matrix of size %dx%d\n");
    matrixInput(mat1);

    printf("Enter elements in second matrix of size %dx%d\n");
    matrixInput(mat2);

    matrixMultiply(mat1, mat2, product);


    printf("Product of both matrices is : \n");
    matrixPrint(product);

    return 0;
}

void matrixInput(int mat[][])
{
    int row, col;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            scanf("%d", (*(mat + row) + col));
        }
    }
}

void matrixPrint(int mat[][])
{
    int row, col;
    printf("\n Row ? ");
    scanf("%d",&row);
    printf("\n Column ? ");
    scanf("%d",&col);
    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            printf("%d ", *(*(mat + row) + col));
        }

        printf("\n");
    }
}


void matrixMultiply(int mat1[][], int mat2[][], int res[][])
{
    int row, col, i;
    int sum;


    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            sum = 0;

            for (i = 0; i < COL; i++)
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }
            
            *(*(res + row) + col) = sum;
        }
    }
}

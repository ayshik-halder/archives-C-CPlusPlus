#include <stdio.h>
#define ROW 3
#define COL 3

void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixAdd(int mat1[][COL], int mat2[][COL], int res[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);
void matrixTranspose(int mat1[][COL],  int res[][COL]);



int main()
{
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int res[ROW][COL];
    int ch;
    printf("\n\n 1. Addition \n\n 2.Multiplication \n\n 3.Transpose \n\n");
    scanf("%d",&ch);
    if(ch==1)
	{
		printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
    	matrixInput(mat1);
   		printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
  		matrixInput(mat2);
		matrixAdd(mat1, mat2, res);
		printf("Addition of both matrices is : \n");
    	matrixPrint(res);	
    	return 0;
	}
	
    else if(ch==2)
	{
	printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
    matrixInput(mat1);
    printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
    matrixInput(mat2);	
    matrixMultiply(mat1, mat2, res);
    printf("Product of both matrices is : \n");
    matrixPrint(res);
    return 0;
	}
	
 	else if(ch==3)
	 {	
	 	printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
    	matrixInput(mat1);
	 	matrixTranspose(mat1, res);
	 	printf("Transpose of  matrix is : \n");
    	matrixPrint(res);
 		return 0;
	 }
	 
	else
	  printf("\n Wrong Choice");

  return 0;
}


void matrixInput(int mat[][COL])
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

void matrixPrint(int mat[][COL])
{
    int row, col;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            printf("%d ", *(*(mat + row) + col));
        }

        printf("\n");
    }
}

void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
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
void matrixTranspose(int mat1[][COL],  int res[][COL])

{
	int row, col, i;

    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
        	*(*(res + row) + col)=*(*(mat1 + col) + row);
    	}
	}
	
	
}

void matrixAdd(int mat1[][COL], int mat2[][COL], int res[][COL])
{
	int row, col, i;
    int sum;


    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
        	*(*(res + row) + col)=*(*(mat1 + row) + col)+*(*(mat2 + row) + col);
    	}
	}
}

#include<stdio.h>
void main()
{	int ROW,COL,ROW1,COL1, row, col ,i,sum;
	printf("\n Enter No. of row of 1st Matrix: ");
	scanf("%d",&ROW);
	printf("\n Enter No. of col of 1st Matrix: ");
	scanf("%d",&COL);	
	printf("\n Enter No. of row of 2nd Matrix: ");
	scanf("%d",&ROW1);
	printf("\n Enter No. of col of 2nd Matrix: ");
	scanf("%d",&COL1);
	
	int mat1[ROW][COL];
    int mat2[ROW1][COL1];
    int res[COL][ROW1];
    
    if (COL!=ROW1)
       {
       	 	printf("\n MULTIPLICATION NOT POSSIBLE");
       	 	return 0;
	   }
	   
	printf("\nEnter elements in first matrix of size %dx%d\n", ROW, COL);
    for (row = 0; row<ROW; row++)
    {
        for (col = 0; col<COL; col++)
        {
            scanf("%d", (*(mat1+row)+col));
        }
    }
    
	printf("Enter elements in second matrix of size %dx%d\n", ROW1, COL1);

    for (row = 0; row<ROW1; row++)
    {
        for (col = 0; col<COL1; col++)
        {
            scanf("%d", (*(mat2+row)+col));
        }
    }
    for (row = 0; row < COL; row++)
    {
    	for (col = 0; col < ROW1 ; col++)
        {
            sum = 0;
            for (i = 0; i < COL; i++)
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }
             *(*(res + row) + col) = sum;
     	}
 	}
 	
	printf("Product of both matrices is : \n");
	
 	  for (row = 0; row < ROW1; row++)
    {
        for (col = 0; col < COL1; col++)
        {
            printf("%d ", *(*(res + row) + col));
        }

        printf("\n");
    }
    
	return 0;	
}

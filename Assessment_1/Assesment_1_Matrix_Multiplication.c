//Assesment_1
//Write a program to make multiplication of 2-D Matrix.

#include<stdio.h>
int main()
{
	int first[50][50], second[50][50], result[50][50];
	int rowsFirst, colsFirst, rowsSecond, colsSecond, i, j, k;
	
	printf("Enter number of Rows & Columns for 1st matrix:");
	scanf("%d %d",&rowsFirst, &colsFirst);
	
	printf("Enter elements of 1st matrix:\n ");
	for(i=0; i<rowsFirst; ++i)
		{
			for(j=0; j<colsFirst; ++j)
				{
					scanf("%d",&first[i][j]);
				}
		}	
	printf("Enter number of Rows & Columns for 2nd matrix:");
	scanf("%d %d",&rowsSecond, &colsSecond);
	
	printf("Enter elements of 2nd matrix:\n ");
	for(i=0; i<rowsSecond; ++i)
		{
			for(j=0; j<colsSecond; ++j)
				{
					scanf("%d",&second[i][j]);
				}
		}	
		
	if(colsFirst!=rowsSecond)
				{
					printf("For multiplication number of column in 1st matrix must be equal to number of Rows in 2nd matrix.\n");
					return 1;
				}	
	else{
	
	for(i=0; i<rowsFirst; ++i)
		{
			for(j=0; j<colsSecond; ++j)
			{
				result[i][j]=0;
				for(k=0; k<colsFirst; ++k)
					{
						result[i][j]+=first[i][k]*second[k][j];
					}
			}
		}			
	printf("\n Multiplication of Matrix:\n");
	for(i=0; i<rowsFirst; ++i)
		{
			for(j=0; j<colsSecond; ++j)
				{
					printf("%d\t",result[i][j]);
				}
			printf("\n");
		}
	}
return 0;
}


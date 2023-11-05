#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define cols 3

void addmatrix(int A[][cols], int B[][cols], int C[][cols])
{
	int i, j;
	for(i=0; i<rows; i++)
		for(j=0; j<cols; j++)
			C[i][j]=A[i][j]+B[i][j];
}

void printmatrix(int A[][cols])
{
	int i, j;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
		
}
int main(void)
{
	int A[rows][cols] = {
		{2, 3, 0},
		{8, 9, 1},
		{7, 0, 5}};
	int B[rows][cols] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}};
	int C[rows][cols];
	
	addmatrix(A, B, C);
	printmatrix(C);
}

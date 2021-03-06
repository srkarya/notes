#include <stdio.h>
#define MAX 3

void printArray_or_Horizontal(int piArray[MAX][MAX])
{
	int i,j;

	printf("\n%s:\n", __func__);
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("%d \t",piArray[i][j]);
		}
		printf("\n");
	}
}

void printArrayTopDown_or_Vertical_or_DiagonalMirrorImage(int piArray[MAX][MAX])
{
	int i,j;

	printf("\n%s:\n", __func__);
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("%d \t",piArray[j][i]);
		}
		printf("\n");
	}
}

void printArrayDiagonalMirrorImage2(int piArray[MAX][MAX])
{
	int i,j;

	printf("\n%s:\n", __func__);
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("%d \t",piArray[MAX-1-j][MAX-1-i]);
		}
		printf("\n");
	}
}

void printArrayUpsideDown_or_HorizontalFlip(int piArray[MAX][MAX])
{
	int i,j;

	printf("\n%s:\n", __func__);
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("%d \t",piArray[MAX-i-1][j]);
		}
		printf("\n");
	}
}

void printArrayRightToLeft_or_VerticalFlip(int piArray[MAX][MAX])
{
	int i,j;

	printf("\n%s:\n", __func__);
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("%d \t",piArray[i][MAX-1-j]);
		}
		printf("\n");
	}
}

void printArray_Rotate_90(int piArray[MAX][MAX])
{
	int i,j;

	printf("\n%s:\n", __func__);
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("%d \t",piArray[MAX-1-j][i]);
		}
		printf("\n");
	}
}

void printArrayRightToLeftUpsideDown_or_Rotate_180(int piArray[MAX][MAX])
{
	int i,j;

	printf("\n%s:\n", __func__);
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("%d \t",piArray[MAX-1-i][MAX-1-j]);
		}
		printf("\n");
	}
}

void printArrayprintArrayVerticalUpsideDown_Rotate_270(int piArray[MAX][MAX])
{
	int i,j;

	printf("\n%s:\n", __func__);
	for (i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
		{
			printf("%d \t",piArray[j][MAX-1-i]);
		}
		printf("\n");
	}
}

int main()
{
	int iArray[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}};
	
	printArray_or_Horizontal(iArray);
	printArrayTopDown_or_Vertical_or_DiagonalMirrorImage(iArray);
	printArrayDiagonalMirrorImage2(iArray);
	printArrayUpsideDown_or_HorizontalFlip(iArray);
	printArrayRightToLeft_or_VerticalFlip(iArray);
	printArray_Rotate_90(iArray);
	printArrayRightToLeftUpsideDown_or_Rotate_180(iArray);
	printArrayprintArrayVerticalUpsideDown_Rotate_270(iArray);
}
/*
Sample Output:
[v-srm.MININT-7RKRDIO] ➤ ./a.exe

printArray_or_Horizontal:
1       2       3
4       5       6
7       8       9

printArrayTopDown_or_Vertical_or_DiagonalMirrorImage:
1       4       7
2       5       8
3       6       9

printArrayDiagonalMirrorImage2:
9       6       3
8       5       2
7       4       1

printArrayUpsideDown_or_HorizontalFlip:
7       8       9
4       5       6
1       2       3

printArrayRightToLeft_or_VerticalFlip:
3       2       1
6       5       4
9       8       7

printArray_Rotate_90:
7       4       1
8       5       2
9       6       3

printArrayRightToLeftUpsideDown_or_Rotate_180:
9       8       7
6       5       4
3       2       1

printArrayprintArrayVerticalUpsideDown_Rotate_270:
3       6       9
2       5       8
1       4       7

------------------- 4X4 Matrix ------------------- 

[v-srm.MININT-7RKRDIO] ➤ ./a.exe

printArray_or_Horizontal:
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16

printArrayTopDown_or_Vertical_or_DiagonalMirrorImage:
1       5       9       13
2       6       10      14
3       7       11      15
4       8       12      16

printArrayDiagonalMirrorImage2:
16      12      8       4
15      11      7       3
14      10      6       2
13      9       5       1

printArrayUpsideDown_or_HorizontalFlip:
13      14      15      16
9       10      11      12
5       6       7       8
1       2       3       4

printArrayRightToLeft_or_VerticalFlip:
4       3       2       1
8       7       6       5
12      11      10      9
16      15      14      13

printArray_Rotate_90:
13      9       5       1
14      10      6       2
15      11      7       3
16      12      8       4

printArrayRightToLeftUpsideDown_or_Rotate_180:
16      15      14      13
12      11      10      9
8       7       6       5
4       3       2       1

printArrayprintArrayVerticalUpsideDown_Rotate_270:
4       8       12      16
3       7       11      15
2       6       10      14
1       5       9       13

*/

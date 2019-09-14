#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int r, c;

void printArray(int **myArray)
{

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			printf("%d ", myArray[i][j]);
		}
		printf("\n");
	}
}
int ** getValuesOfMatrix(int **myArray)
{
	for (int i = 0; i < r; i++){
		printf("Enter Row %d values\n", i + 1);
		for (int j = 0; j < c; j++){
			scanf("%d", &myArray[i][j]);
		}
	}

	return myArray;

}
int **  MatrixMultiply(int **myArray1, int **myArray2, int **RESULT)
{
	int sum = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			for (int k = 0; k<c; ++k)
			{
				sum += myArray1[i][k] * myArray2[k][j];

			}
			RESULT[i][j] = sum;
			sum = 0;
		}
	}

	return RESULT;
}

int main() {

	printf("Enter Rows ");
	scanf("%d", &r);

	printf("Enter Columns ");
	scanf("%d", &c);

	int **myArray1 = (int **)malloc(r * sizeof(int *));

	int **myArray2 = (int **)malloc(r * sizeof(int *));

	int **RESULT = (int **)malloc(r * sizeof(int *));

	for (int i = 0; i<c; i++){
		RESULT[i] = (int *)malloc(c * sizeof(int));
		myArray1[i] = (int *)malloc(c * sizeof(int));
		myArray2[i] = (int *)malloc(c * sizeof(int));
	}


	printf("ARRAY 1 DATA\n\n");
	myArray1 = getValuesOfMatrix(myArray1);
	printf("ARRAY 2 DATA\n\n");
	myArray2 = getValuesOfMatrix(myArray2);

	printf("\nRESULT\n");

	RESULT = MatrixMultiply(myArray1, myArray2, RESULT);

	printArray(RESULT);

	system("PAUSE");
	return 0;
}

#include <stdio.h>
#define maxsize 10

int main (){
	int rows,cols;
	int matrix[maxsize],[maxsize];
	int vector [maxsize];
	int result[maxsize];

	printf("Enter the No. of rows:  ");
	scanf("%d", &rows);
	printf("Enter No. of coloms:  ");
	scanf("%d", &cols);
	

	printf("Enter the elements (%d x %d)\n", rows ,cols);
	for (int i =0; i< rows; i++){
	for(int j=0; j<cols;j++){
		printf("Element [%d][%d]:", i,j);
		scanf("%d", &matrix[i][j]);
		}
	}

	printf("enter the no. vector: %d \n", cols);
	for (int i =0; i< cols;i++){
		printf("Element [%d]", i);
		scanf("%d", &vector[i]);
	}

	for ()
return 0;
}

#include <stdio.h>

int main(){
	/* input a 2x2 matrix1*/
	printf("input elements [row][column] of matrix1:\n");
	int matrix1[2][2];
	int matrix2[2][2];
	int matrix3[2][2];
	/* counter variables for the elements */
	int r, c;
	for(r=0; r<2; r++) {
		for(c=0; c<2; c++) {
			printf("[%d][%d]:", r+1, c+1);
			scanf("%d", &matrix1[r][c]);
		}
	}
	// Display the matrix1
	printf("matrix1 is:\n");
	for(r=0; r<2; r++) {
		for(c=0; c<2; c++) {
			printf("%d ", matrix1[r][c]);
			if(c==1){
				printf("\n");
			}
		}
	}
	
	/* input a 2x2 matrix2 */
	printf("matrix output:\n");
	/* counter variables for the elements */
	//int r, c;
	for(r=0; r<2; r++) {
		for(c=0; c<2; c++) {
			printf("[%d][%d]:", r+1, c+1);
			scanf("%d", &matrix2[r][c]);
		}
	}
	// Display the matrix
	printf("matrix2 is:\n");
	for(r=0; r<2; r++) {
		for(c=0; c<2; c++) {
			printf("%d ", matrix2[r][c]);
			if(c==1){
				printf("\n");
			}
		}
	}
	
	// Compute matrix product elements
	matrix3[0][0] = matrix1[0][0]*matrix2[0][0] + matrix1[0][1]*matrix2[1][0];
	matrix3[1][0] = matrix1[1][0]*matrix2[0][0] + matrix1[1][1]*matrix2[1][0];
	matrix3[0][1] = matrix1[0][0]*matrix2[0][1] + matrix1[0][1]*matrix2[1][1];
	matrix3[1][1] = matrix1[1][0]*matrix2[0][1] + matrix1[1][1]*matrix2[1][1];
	
	// Display the matrix1 x matrix2 output
	printf("matrix1 x matrix2:\n");
	for(r=0; r<2; r++) {
		for(c=0; c<2; c++) {
			printf("%d ", matrix3[r][c]);
			if(c==1){
				printf("\n");
			}
		}
	}
	
	return 0;
}

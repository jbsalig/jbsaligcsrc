#include <stdio.h>

int main(){
	/* input a 2x2 matrix*/
	int matrix1[2][2];
	/* counter variables for the elements */
	int r, c;
	for(r=0; r<2; r++) {
		for(c=0; c<2; c++) {
			printf("matrix element [%d][%d]:", r+1, c+1);
			scanf("%d", &matrix1[r][c]);
		}
	}
	// Display the matrix
	printf("matrix1 is:\n");
	for(r=0; r<2; r++) {
		for(c=0; c<2; c++) {
			printf("%d ", matrix1[r][c]);
			if(c==1){
				printf("\n");
			}
		}
	}
	return 0;
}

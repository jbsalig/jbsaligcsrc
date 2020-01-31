#include <stdio.h>
    #include <stdlib.h> // For exit() function
    int main() {
        printf("file running\n");
      	FILE *fp = fopen("matrix1.txt", "r");
	int array[100];
	int i = 0;
	int retval;

	if(fp == NULL) {
    		printf("error in opening file\n");
    	// handle it
	}

	// note the null statement in the body of the loop
	while(i < 100 && (retval = fscanf(fp, "%d", &array[i++])) == 1) ; 

	if(i == 100) {
    	// array full
	}

	if(retval == 0) {
    		// read value not an integer. matching failure
	}

	if(retval == EOF) {
    	// end of file reached or a read error occurred
    	if(ferror(fp)) {
        // read error occurred in the stream fp
        // clear it
        clearerr(fp);
	printf("all items %d",i);
    }
}
	printf("%d entries found", i);
	printf("%d %d", array[1], array[2]);
// after being done with fp
fclose(fp);

//fclose(fptr);
        return 0;
    }

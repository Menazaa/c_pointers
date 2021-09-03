#include <stdio.h>
#include <stdlib.h>

FILE *openFile(char *dir);


int main(void)
{
	FILE *fPointer = openFile("F:\\code\\c_pointers\\pointer basics\\pointer_basics.c");
	fclose(fPointer);
	return(0);
}

FILE *openFile(char *dir){
    FILE *fp;
	fp = fopen(dir,"r");
	/* test the pointer returned from a function */
	if( fp==NULL )
	{
		/* exit upon function failure */
		fprintf(stderr,"Unable to open file\n");
		exit(1);
	}
	puts("File opened!");
    return fp;
}
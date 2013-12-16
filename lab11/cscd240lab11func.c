//Jaime Williams
//CSCD240 Lab11
//Due 11/11/2013

#include "cscd240lab11.h"

extern const int MAX;

//functions
FILE * openFile(int argc, char * argv[]){
	FILE *fp = NULL;
	//printf("argc = %d\n", argc );
	fp = fopen(argv[argc - 2], "r");
	if(fp == NULL)
		printf("File is closed.\n");
	// printf("%s\n", argv[argc - 2] );
	return fp;
}//end openFile

FILE * openOutFile(int argc, char * argv[]){
	FILE *fp = NULL;
	//printf("argc = %d\n", argc );
	fp = fopen(argv[argc - 1], "w");
	if(fp == NULL)
		printf("File is closed.\n");
	// printf("%s\n", argv[argc - 1] );
	return fp;
}//end openOutFile

void readMagic(FILE * fin, char magic[3]){
	
	fscanf(fin,"%s", magic);

}//end readMagic

void readComment(FILE * fin, char comment[MAX]){
	
	fscanf(fin,"%s", comment);
	// printf("%s\n", comment );
	fscanf(fin,"%s", comment);
	// printf("%s\n", comment );

}//end readComment

int readRows(FILE * fin, int rows){
	
	fscanf(fin,"%d", &rows);
	// printf("%d\n", rows );
	return rows;

}//end readRows

int readCols(FILE * fin, int cols){
	
	fscanf(fin,"%d", &cols);
	// printf("%d\n", cols );
	return cols;

}//end readCols

int readIntensity(FILE * fin, int intensity){
	
	fscanf(fin,"%d", &intensity);
	// printf("%d\n", intensity );
	return intensity;

}//end readIntensity

int ** fillArray(int rows, int cols, FILE * fin){
	int  x, y = 0;
	int num = 0;
	int ** ara = NULL;

	if (rows == 0){
		perror("This to say it is broken.");
		exit(-1);
	}
	
	ara = (int **)calloc(rows, sizeof(int *));	

	for(x=0;x<rows;x++){
		ara[x] = (int *)calloc(cols, sizeof(int));
		for (y = 0; y < cols; y++){
			fscanf(fin,"%d ",&ara[x][y]);
			// printf("%d ", ara[x][y]);
		}
		// printf("\n");
	}//end for

	return ara;
}//end fillArray

void writeOutFile(FILE * fout, 
					int ** pixels, 
					char magic[3], 
					char comment[MAX], 
					int rows, 
					int cols, 
					int intensity){
	
	int x, y;

	fprintf(fout, "%s\n", magic);
	fprintf(fout, "# ");
	fprintf(fout, "%s\n", comment);
	fprintf(fout, "%d %d\n", rows, cols);
	fprintf(fout, "%d\n", intensity);

	for (x = 0; x < rows; x++){
		for (y = 0; y < cols; y++){
			fprintf(fout, "%d\t", pixels[x][y]);
		}
		fprintf(fout,"\n");
	}
}//end writeOutFile

void cleanUp(int ** temps){
	if(temps != NULL){
		free(temps);
		temps = NULL;
	}
}//end cleanUp
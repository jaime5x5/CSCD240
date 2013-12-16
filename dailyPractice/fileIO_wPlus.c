// do {
// 	char temp[100];
// 	printf("%s\n", );
// 	fgets(temp,100,stdin); //fgets passes \n
// 	FILE * fin=fopen("filename.txt","r")  

// while(fin == NULL);

// do{
// 	fscanf(fin, "filename", &x);
// 	flush(fin);

// }	
// while(fgets(fin) != '\n');
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

int main(int argc, char * argv[]) //argc is count of cmd line args
{

	char fn[MAX];
	FILE * fin = NULL;
	FILE * fout = NULL;
	int count = 0, len, num;
	int * array = NULL;

	printf("argc is %d\n", argc);
	printf("argv is %s\n", argv[2]);

	if(argc < 2){
		do
		{
			printf("NO ARGS - Please enter the name of an input file ");
			fgets(fn, MAX, stdin);
			len = strlen(fn);
			if(fn[len - 2] == '\r')
				fn[len - 2] = '\0';
			else if(fn[len - 1] == '\n')
				fn[len - 1] = '\0';
			fin = fopen(fn, "r");
		}while(fin == NULL);
	}//end if
	else
	{
		fin = fopen(argv[1],"r");
		while (fin == NULL);
		{
			printf("Please enter the name of an input file " );
			fgets(fn, MAX, stdin);
			len = strlen(fn);
			if(fn[len - 2] == '\r')
				fn[len - 2] = '\0';
			else if(fn[len - 1] == '\n')
				fn[len - 1] = '\0';
			fin = fopen(fn, "r");
		}
	}//end else
	count = 0;
	fscanf(fin,"%d",&num); //prime read.
	while(!feof(fin)){
		count++;
		fscanf(fin,"%d",&num);
	}
	if (count == 0){
		perror("this to say");
		exit(-1);
	}

	//fseek(fin, 0, SEEK_SET);
	//or
	rewind(fin);

	//array=(int *) malloc(count * sizeof(int));

	array=(int *)calloc(count, sizeof(int));
	if(array==NULL)
		exit(-1);

	int x;
	for(x=0;x<count;x++)
		fscanf(fin,"%d",&array[x]);
	//sort(array, count);
	fout=fopen("out.txt", "w");
	if(fout==NULL)
		exit(-1);
	for(x=0;x<count;x++){
		fprintf(fout, "%d\n", array[x]);
		fprintf(stdout, "%d\n", array[x]);
	}
	fprintf(stdout, "\n");
	fprintf(fout, "\n");

	if(array != NULL)
		free(array);
	array=NULL;


	return 0;
}














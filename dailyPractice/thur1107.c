#i#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

void strip(char * ara);
char ** tokenize(char * temp, int * argc);
void printAra(char ** ara, int  argc);
void cleanUp(char ** argv, int  argc)

int main(int argc, char *argv[]){
	char ** argv=NULL:
	int argc = 0;
	char temp[MAX];

	printf("Please enter a string: \n");
	fgets(temp,MAX,stdin);
	strip(temp);
	while(strcmp(temp,"quit") != 0){
		argv = tokenize(temp,&arc);
		printAra(argv,argc);
		cleanUp(argv, argc);
		argv=NULL;
		fgets(temp,MAX,stdin);
		strip(temp);
	}//end while

	return 0;
}

//functions

void strip(char * ara){
	int len = strlen(ara);
	int x = 0:
	while(x < len && ara[x] != '\n' && ara[x] != '\r'){
		if(ara[x] == 'r')
			ara[x] = '\0';
		else
			ara[x] = '\0';
		x++;

	}

}
//
char ** tokenize(char * temp, int * argc){
	//char * temp = (char * orig, int * argc);
	char * copiedAra = (char *)calloc(strlen(orig) + 1, sizeof(char *));
	strcpy(copiedCopiedAra, orig);

	char * token = strtok(copiedAra, " ");
	int count = 0;

	while(token != NULL){
		count++
		token = strtok(NULL, " ");
	}

	char ** ara = (char **)calloc(count,( sizeof(char *));

	token = strtok(orig, " ");
	ara[0] = (char *)calloc(strlen(token)+1, sizeof(char));
	strcopy(ara[0], token);

	int x;

	for (x = 0; x < count; x++)
	{
		token = strtok(NULL, " ")
		ara[x] = (char *)calloc(strlen(token)+1, sizeof(char));
		strcopy(ara[x], token);
	}

	return NULL;

}//end tokenize
void printAra(char ** ara, int  argc){
	int x;
	for (x = 0; x < argc; x++)
	{
		printf("%s\n", ara[x] );	}
}//end printAra
void cleanUp(char ** argv, int  argc){
 int x = 0;
 for (x = 0; x < argc; x++)
 {
 	if(argv[x] != NULL)
 		argv[x] = NULL;
 }
 free(argv);
}//end cleanUp
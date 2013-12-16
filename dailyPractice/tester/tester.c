
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

void strip(char * ara);
char * tokenize(char * temp, int * argc);
void printAra(char * ara, int * argc);
void cleanUp(char * argv, int * argc);

int main(){
	char * argv = NULL ;
	int * argc = 0 ;
	char temp[MAX];

   printf("Please enter a string: ");
   fgets(temp,MAX,stdin);
   strip(temp);
   while(strcmp(temp,"quit") != 0){
      //argc = tokenize(temp,&argv);
      // int tokenizeString(char * s, char ***argv)
      tokenize(temp, argc);
      printAra(temp, argc);
      // cleanUp(temp, argc);
      argv=NULL;

   }//end while

   return 0;
}

//functions

void strip(char * ara){
   int len = strlen(ara);
   int x = 0;
   while(x < len ){
      if(ara[x] == '\r')
         ara[x] = '\0';
      else if(ara[x] == '\n')
         ara[x] = '\0';
      x++;
   }
}//end strip

char * tokenize(char * temp, int * argc){
   char * orig = temp;
   char * token = NULL;
   int count = 0;
   int x;
   char ** ara = NULL;
   // temp = (orig, argc);
   char * copiedAra = (char *)calloc(strlen(orig) + 1, sizeof(char *));
   strcpy(copiedAra, orig);

   token = strtok(copiedAra, " ");

   while(token != NULL){
      // printf("%s\n",token );
      // printf("%s\n",copiedAra );      
      count++;
      token = strtok(NULL, " ");
   }

   ara = (char **)calloc(count,( sizeof(char *)));

   token = strtok(orig, " ");
   //char ** ara = (char **)calloc(strlen(token)+1, sizeof(char));
   ara[0] = (char * )calloc(strlen(token)+1, sizeof(char));
   strcpy(*ara, token);

   for (x = 0; x < count - 1; x++)
   {
      token = strtok(NULL, " ");
      ara[x] = (char *)calloc(strlen(token)+1, sizeof(char));
	   printf("%s\n",token );
      printf("%s\n",ara[x] ); 
      strcpy(ara[x], token);
   }
   return NULL;
}//end tokenize

void printAra(char * temp, int * argc){
	int x;
	int count = 0;
	count = strlen(temp);
	printf("%d\n", count );
	for (x = 0; x < count; x++)
	{
      printf("%s\n", temp);   }
}//end printAra

void cleanUp(char * temp, int  * argc){
 int x = 0;
 for (x = 0; x < *argc; x++)
 {
   if(temp[x] != (int) NULL)
      temp[x] = (char) NULL;
 }
 free(temp);
}//end cleanUp

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

int main(int argc, char * argv[]) //argc is count of cmd line args
{

	char fin[100];
	FILE *fin = NULL;
	int *array = NULL;

	if(argc < 1){
		do
		{
			printf("fin %s\n", fin[100]);
			fgets(fin, 100, stdin);
			strip(fin);
			fin = fopen(fin, "r");
		}while(fin == NULL);
	}
	else
	{
		fin = fopen(argv[1],"r");
		while (fin == NULL);
		{
			printf("%s\n", );
			fgets(fin, 100, stdin);
			strip(fin);
			fin = fopen(fin, "r");
		}
	}
	int count = 0;
	return 0;
}














valgrind ./a.out < test.txt
valgrind --leak-check=full

FILE * fin = fopen("testdat.txt", "r");
if(fin== NULL)
	exit(-1);
int ** ara = NULL;
int rows, cols;
int r,c;

fscanf(fin, "%d", &rows);
fscanf(fin, "%d", &cols);

ara = (int**)calloc(rows, sizeof(int*)); //make rows
for (r = 0; r < rows; r++)
{
	ara[r]=(int*)calloc(cols,sizeof(int)); //make cols
	printf("ara[%d]: %p\n",r, &ara[r] );
	printf("ara[%d]: %p\n",r, *ara[r] );
}

for (r = 0; r < rows; r++)
{
	for (c = 0; c < cols; c++)
	{
		printf("ara[%d][%d]: %d %p\n",r ,c, ara[r][c], &ara[r][c] );
		fscanf(fin,"%d", &ara[r][c])//this might not work (&ara[r][c])
									//(*(ara + r) + c) good one
									//ara[r] + c
	}
}


cleanUp(ara, rows);			//pass ara by value to modify in func &ara
printf("ara %p\n", ara);
fclose(fin);

void cleanUp(int ** ara, int rows){		// to pass pointer int *** ara

	int x = 0;
	for (x = 0; x < rows; x++)
	{
		if (ara[x] != NULL)
		{
			free(ara[x]);
			ara[x] = NULL;
		}
	}
	if(ara != NULL)
		free(ara);

	ara = NULL;
}








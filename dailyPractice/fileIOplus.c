//this starts @ end of else in sheet he gave us today
fscanf(fin,"%d",&num); //prime read.
while(!feof(fin)){
	count++;
	fscanf(fin,"%d",&num);
}
if (count == 0){
	perror("this to say");
	exit(-1);
}

fseek(fin, 0, SEEK_SET);
//or
rewind(fin);

array=(int *) malloc(count * sizeof(int));

array=(int *)calloc(count, sizeof(int));
if(array==NULL)
	exit(-1);

int x;
for(x=0;x<count;x++)
	fscnf(fin,"%d",&array[x]);
sort(array, count);
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
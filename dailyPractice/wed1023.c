//wed class notes

void fillArray(int array[], int length);

// int * fillArray(int array[], int lenght){
// 	int copy [] = {100, 200, 300, 400, 500}; //copy [] address, int *copy
// 	return copy;
// }

int main()
{
	int array[5] = {10, 20,30,40,50};
	int *copy;
	int x;

	copy = fillArray(array, 5);

	
}

void fillArray(int array[], int lenght){
	int copy [] = {100, 200, 300, 400, 500}; //copy [] address, int *copy
	return copy;
}

char name[100] pass in Stu10 //wasting memory
// A pointer is a variable that for it's value - contents it holds a 
// memory address in java we would callthis a reference

//using * 3 different ways
// to declare a pointer int * ptr when declared always intitialized
// 2 pointers on same line int * ptr=NULL, * ptr2=NULL;

//int * ptr=NULL; -->0Xaabb0
//int val=12; --> 0Xccdd0
// printf("%p", ptr); --> 0X0000 what is in box
// printf("d\n", val); --> 12 
// printf("%p\n", &val); --> 0Xccdd0 where is the box
// printf("%p\n", &ptr ); -->0Xaabb0


int main (){

	int * ptr, int * ptr2;
	int val = 12;
	printf("%p\n", ptr);
	printf("%pd\n", val);
	printf("%p\n", &ptr);
	printf("%p\n", &val);

	printf("sizeof val %d and sizeof %d", sizeof(val), sizeof(ptr));

	return = 0;
}

// ptr= &val  -- passes vals memory location to ptr.






















#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct address{
	char *street;
};

struct student{
	char *name;
	int id;
	struct address add;
}student;

student readInfo();
void printStudent(student person);

int main(){

	int x;
	student *array;
	array = (student *)calloc(2, sizeof(student));

	array[0] = readInfo();
	array[1] = readInfo();

	printf("\nStudent 0:\n");
	printStudent(array[0]);

	printf("\nStudent 1:\n");
	printStudent(array[1]);

	readInfo2(&stu1);
	printf("\nStudent1:\n");
	printStudent(stu1);

	// for x = 0; x < 2; x++)
	// {
	// 	if(array[x].name != NULL){
	// 		// free(stu1.name);
	// 		// stu1.name = (char *)NULL;
	// 		memset(array[x].name, 0, sizeof(array[x].name);
	// 	}

	// 	if(array[x].add.street != NULL){
	// 		memset(array[x].add.street, 0, sizeof(array[x].add.street));
	// 	}
	// }

	// if(array != NULL){
	// 	memset(array, 0, sizeof(array);
	// }

	return 0;
}

student readInfo(){
	student person;
	char temp[100];
	printf("Please enter name ");
	fgets(temp, 100, stdin);
	person->name = (char *)calloc(strlen(temp) + 1, sizeof(char));
	// memset(person.name, 0, sizeof(person->name));
	strcpy(person.name, temp);


	printf("Please enter the id ");
	scanf("%d", &person.id);
	getchar();

	printf("Please enter the street ");
	fgets(temp, 100, stdin);
	person.add.street = (char *)calloc(strlen(temp), sizeof(char));
	strcpy(person.add.street, temp);

}

void printStudent(struct student person){

	printf("Name: %s\nID: %d\nAddress:%s\n", person.name, person.id, person.add.street);
}
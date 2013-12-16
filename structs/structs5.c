#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char name[100];
	int id;
};

typedef struct student student;

void readInfo2(struct student *person);
void printStudent(struct student person);

int main(){

	struct student stu1;

	readInfo2(&stu1);
	printf("\nStudent1:\n");
	printStudent(stu1);

	// if(stu1.name != NULL){

	// 	free(stu1.name);
	// 	stu1.name = NULL;
	// 	// memset(stu1.name, 0, sizeof(stu1.name));
	// }

	return 0;
}

void readInfo2(student *person){
	char temp[100];
	printf("Please enter name ");
	fgets(temp, 100, stdin);
	person -> name = (char *)calloc(strlen(temp) + 1, sizeof(char));
	strncpy(person->name, temp, strlen(temp)-1);
	person->id = 66777;
}

void printStudent(student person){

	printf("\nStudent1:\nName: %s\nID: %d\n", person.name, person.id);
}
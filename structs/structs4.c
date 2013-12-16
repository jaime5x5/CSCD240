#include <stdio.h>
#include <string.h>

struct student{
	char name[100];
	int id;
};

void readInfo2(struct student *person);
void printStudent(struct student person);
int main(){

	struct student stu1;

	readInfo2(&stu1);
	printStudent(stu1);

	

	return 0;
}

void readInfo2(struct student *person){
	strcpy(person -> name, "Person 1");
	person->id = 777;
}

void printStudent(struct student person){

	printf("\nStudent1:\nName: %s\nID: %d\n", person.name, person.id);
}
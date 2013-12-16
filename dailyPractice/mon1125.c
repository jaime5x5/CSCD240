#include
	prototypes-->specify the address of a function that someone else wrote.
	function definition lives in a packaged set of c files$/.o files often called a library.
	static library --> w/an extension .a
	dynamic librarys w/an extension.so (shared object).

	main HW

	gcc main.c

	1) The preprocessor runs(cpp)
	does a susstitution & produces
		/ymp/main.i still reusable source code
	gcc -E main.c

	2) basic compiler (cc1) is going to run /tmp/main.i --> /tmp/main.s code translated into Assemply.

	gcc -S main.c

	3) Assembler runs(as) converts /tmp/main.s into /tmp.main.o
	o-->objectfile ROF (relocatable object file). Equivalent to a class file in java.

	gcc -c main.c

	objdump -h //good tool for looking at assembly

	4) static linker runs (ld) & combines /tmp/main.o w/  --> a.out -ELF executable linkd file.

	#include "static.h"

	int main(){
		func1();
		func2();
	return 0;

	}
	______________

	static.h //file

	one proto and one .h per function for portability.

	2 steps 1) get your .o files

	gcc -c function*.c //makes .o files

	gcc main.c function1.o function2.0 

	ar command packages everything together into an archieve
	s option
	r option

	ar rs nameOfLibrary function1.0 function2.o

gcc main.c ./locationOfLibrary























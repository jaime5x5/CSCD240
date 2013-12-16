//input ugliness

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int num, num1;
	char ltr, ltr2;
	char name[100];//buffer overflow vulnerability.
	double num2;	

	 printf("please enter name: ");
	 scanf("%s", name); //scanf by default stops on whitespace.
	 printf("your name is %s\n", name);
	 
	while(fgetc(stdin) != 'n'){
		printf("please 2: ");
		scanf("%i%d", &num, &num1);
		printf("go again (y/n) ");
		scanf("%c", &ltr);
		printf("Letter is %c\n", ltr);
		}
	return 0;
	}
      // char goAgain;
      // int theNum, guess;
      // Scanner kb = new Scanner(System.in);
      
      // do
      // {
      
         // theNum = ((int)(Math.random()* 100)) + 1;
         
         // System.out.println(theNum);
         
         // do
         // {
         
            // System.out.print("Please enter a guess between 1 & 100 ");
            // guess = kb.nextInt();
            // kb.nextLine();
            
            // if(guess > theNum)
               // System.out.println("Too High");
         
            // else if(guess < theNum)
               // System.out.println("Too Low");
   
            // else
               // System.out.println("You go it");
         
         // }while(theNum != guess); 
         
         // System.out.print("Would you like to play again? (y/n) ");
         // goAgain = kb.nextLine().charAt(0);
       
      // }while(goAgain == 'y');

// printf("please double:");
// scanf("%lf", &num2);
// printf("num2 is %f\n", num2); //%.10f\n specifies precision

// printf("please char: ");
// scanf("%c", &ltr2);
// if(ltr == ltr2);
// 	printf("same\n");
// else
// 	printf("not same\n");

// printf("please enter name: ");
// scanf("%s", name); //scanf by default stops on whitespace.
// printf("your name is %s\n", name);

// printf("please number:");
// scanf("%d", &num);
// printf("you entered %d\n", num);

//char fname[100], lname[100];
//scanf("%s%s", fname,lname);   this leaves \n


//fgets(fname,100,stdin);   //pulls \n and makes it part of your string 
							//will pull 99 or until \n must leave room for \0

// int len = strlen(name);
// int x = 0;
// while(x<len && name[x] != '\n') {

// }

// fgets(temp, 10, stdin);

// if(name[len -2] == '\r')
// 	name[len -2] = '\0';
// else if (name[len - 1] == '\n')
// 	name[len - 1] ='\0';


//char ltr;
//int x, y;
//double d;
//char name[100]


//printf("words");
//scanf("%d", &num);
//fscanf(stdin, "%i", &num);
//scanf("%i%i", &num, &num1)

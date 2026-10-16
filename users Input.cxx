// variables and data types 


/*name:samuel wainaina mwaura
Reg no:CT100/G/30652/36
*/
#include <stdio.h>

int main()
{
	// declare variables 
	char grade ; //%c
	char name[15] ; //%s
	int age ; //%d
	float marks ; // %f
	double pi ; //%1f
	
	printf("Enter your grade \t");
	scanf("%c", &grade);
	
	printf("Enter your name \t");
	scanf("%s", &name[15]);
	
	printf("Enter your age: \t");
	scanf("%d", &age);
	
	printf("Enter your marks: \t");
	scanf("%f", &marks);
	
	printf("Enter thr value of pi: \t");
	scanf("%1lf", &pi);
	
	printf("The grade is %c \n",grade);
	printf("My name is %s \n",name);
	printf("I am %d years old \n",age);
	printf("I scored %.2f marks in kcse \n",marks);
	printf("The value of pi is %.31f \n",pi);
	
}
	
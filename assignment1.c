#include <stdio.h>

/* C  code 
for  a  program  that
asks  the  user  to  enter  a 
person's age, and then
display a message indicating whether the person is an infant, 
child, teenager, or adult. 




If the person is 1 year old or less, he or she is an infant.

If the person is older than 1 year, but younger than 13 years, he or she is a child.

If the person is at least 13 years old, but less than 20 years old, he or 
she is a teenager. 

If the person is at least 20 years old, he or she is an adult.
*/

int main() {
	int age;
	printf("Please enter your age: \n");
	scanf("%d",&x);
	
	while(age<0){

		printf("You entered invalid age, please enter valid age : \n");
		scanf("%d",&age);	
		   
	}
	if(age<=1){

	printf("You are infant.");

  	}else if (age<13){

  		printf("You are child.");

	}else if (age<20){

		printf("You are teenager.");

	}else 
				  printf("You are adult.");			 
        return 0;
	

}

#include <stdio.h>

/*


C code  for  a 
program that
finds the 
sum  of  all even
numbers between 1 to n.
Where n
is an integer number entered by the user.

*/

int main(){
	int number,sum=0,i;
	
	printf("Please enter the number: \n");
	scanf("%d",&number);

	while (number<1){
		printf("You entered invalid number, please type valid number: \n");
		scanf("%d",&number);
		}
	
	for(i=1;i<=number;i+=2){
		sum+=i;
	}
	
	printf("Your sum is %d \n",sum);
	
	return 0; 
}

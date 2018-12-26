#include <stdio.h>

/*

C code for a 
program that finds 
the sum of the series
1 + (1/2) + (1/3) + ... + (1/n).
Where n is a positive
integer number entered by the user.

*/

int main(){
	int number;
	float sum=0.0,i;
	
	// I used float for "i" and "sum" because in the 17. line,it gives a synthax error.
	// Codes can't compile 1/i when "i" was integer. So you should use float.
	// I used float for "sum" because we summed fractional numbers.
	printf("Please enter positive number: \n");
	scanf("%d",&number);

	while (number<0){
		printf("You entered invalid number,please enter positive number: \n");
		scanf("%d",&number);
		}

	for(i=1;i<=number;i++){
		sum+=1/i;
		}

	printf("Your sum is %f \n",sum);

	return 0;
}

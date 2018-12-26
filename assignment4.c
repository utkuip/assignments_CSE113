#include <stdio.h>

/*
C code for a program that receives two positive integers A and B, and then 
finds and prints all the perfect numbers that exist between A and B.

*/


int main(){

	int lnumber,unumber,i,sum,i2,check=1;

	// Check is maded up by my mind.
	// If the codes couldnt find the perfect number, check wouldn't change.
	// If the codes happen to find the perfect number, check changes on the 50th line.

	printf("Enter lower number: \n");
	scanf("%d",&lnumber);

	while (lnumber<0){

		printf("You typed negative number, please type positive number : \n");
		scanf("%d",&lnumber);
	}

	printf("Enter upper number: \n");
	scanf("%d",&unumber);

	while (unumber<0){

		printf("You typed negative number, please type positive number : \n");
		scanf("%d",&unumber);
	}
	

	for (i=lnumber;i<=unumber;i++){
	// This for loop defines the lower and upper limits.
		sum=0;
		for (i2=1;i2<i;i2++){
		// This for loop finds perfect numbers between lower and upper number.
			if(i%i2==0){
 
				sum+=i2;
			}
		}
		if(sum==i){
		
			printf("%d  \n",i);
			check=0;
		}
	
	
	}
	if (check==1){
	
		printf("There is no perfect number. \n");
	}


	return 0;
}

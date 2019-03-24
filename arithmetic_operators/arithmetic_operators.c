#include<stdio.h>

int main(){
	int i = 9, j = 3, k;
	k = i + j;//Additon
	printf("The addition of %d and %d is %d \n", i,j,k);
	
	k = i - j; //Subtraction

	printf("The subtraction of %d and %d is %d \n", i,j,k);

        k = i * j;// Multiplication
      
	printf("The multiplication of %d and %d is %d \n", i,j,k);
	
	k = i / j; //Divison

	printf("The divison of %d and %d is %d \n", i,j,k);

	return 0;
}

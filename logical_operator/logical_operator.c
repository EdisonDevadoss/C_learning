#include<stdio.h>
//Logical Operators

int main(){
 	/*

	 And
	 TT -> T
	 TF -> F
	 FT -> F
	 FF -> F

	 OR
	 T T -> T
	 T F -> T
	 F T -> T
	 F F -> F

	 && -> And
	 || -> OR
	 */

	int result = 3!=4 || 3 > 1;
		printf("%d \n", result);
		return 0;
}

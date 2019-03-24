
 #include<stdio.h>

int main()//return type
	//if we are not add return type of main, it show warning massge. We should define what it is going to return
{
   float a = 5.5; //-> Primitive Data type
   int i = 2;
   int j = 3;
   int k = i + j;
   char c = 'y';   
   printf("The addition of %d and %d is %d",i,j,k); //print format
   return 0;
}

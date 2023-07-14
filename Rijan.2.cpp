#include<stdio.h>
#include<conio.h>
int main ()
 {
 	double firstInput,secondInput,sum,multiply,division,subtraction;
 	printf("Enter the first input");
 	printf("\n");
 	scanf("%lf",&firstInput);
 	
 	printf("Enter the second input");
 	printf("\n");
 	scanf("%lf",&secondInput);
 	
 	sum = firstInput + secondInput;
 	printf("Sum = %lf",sum);
 	
 	printf("\n");
 	
 	multiply = firstInput * secondInput;
 	printf("Multiply =%lf",multiply);
 	
 	printf("\n");
 	
 	division = firstInput / secondInput;
 	printf("Division =%lf",division);
 	
 	printf("\n");
 	
 	subtraction = firstInput - secondInput;
 	printf("Subtraction = %lf",subtraction);
 	
 	printf("\n");
 	
 	return 0;
 }

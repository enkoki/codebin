#include <stdio.h>

//function declarations
void sum(void);		//Function with no returntype and no parameters
void sub(int a, int b); //Function with no returntype but has parameters
int mul(void);		//Function with returntype but no parameters
float div(int a, int b);//Functions with both returntype and parameters

//Declaring global variables so functions with no parameters can access them too
int num1;
int num2;

int main(void){

	//Asking for 2 numbers
	printf("Enter 2 numbers: ");
	//storing the entered variables into num1 & num2
	scanf("%d%d", &num1, &num2);

	sum(); //Calling sum function
	
	//Calling sub function with parameters num1 & num2
	sub(num1, num2);

	//The mul function returns the value so using the function directly to print
	printf("Multiplication: %d\n", mul());

	//Checking if num2 is zero, because cannot divide by zero
	if(num2 == 0){
		printf("ZeroDivisionError\n");
	}else{
		//div function also returns a value so using it directly to print
		printf("Division: %f\n", div(num1, num2));
	}
	return 0;
}

//Function declarations
void sum(void){

	//printing the sum directly, here sum function can access num1 & num2 just because they are global variables
	printf("Sum: %d\n", num1 + num2);
	return; //return is not necessary for no returntype but good practise to just write "return;"
}

void sub(int a, int b){
	//This function has parameters, so the entered parameters are used and stored in a & b. 
	//The variables declared in function declaration
	printf("Sub: %d\n", a - b);
	return;
}

int mul(void){
	//directly returning
	return num1 * num2;
}
float div(int a, int b){
	//directly returning, note that "div" function has float return type because int does not account for floating points
	//using (float) before "a" typecasts i.e. changes a into float first. Doing this ensures that division is between floats
	return (float)a / b;
}

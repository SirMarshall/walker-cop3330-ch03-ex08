#include "main.h"

int main() 
{
	//Necessary Variable Delcaration
	int num1 = 1;
	int num2 = 2;
	bool num1State;
	bool num2State;

	//Calling functions
	num1State = odd(num1);
	num2State = odd(num2);

	//Logic gate to print results
	if (num1State == true)
	{
		std::cout << "The number 1 is odd.\n";
	}
	else
	{
		std::cout << "Somehow, the laws of mathematics have changed, and the number 1 is even.\n";
	}

	if (num2State == false)
	{
		std::cout << "The number 2 is even.\n";
	}
	else
	{
		std::cout << "Somehow, the laws of mathematics have changed, and the number 2 is odd.\n";
	}
}

bool odd(int num)
{
//Necessary Variable Declaration
bool state;

if(num % 2 == 0)
{
	state = false;
}
else
{
	state = true;
}
return state;
}
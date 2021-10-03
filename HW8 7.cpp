#include<iostream>
using namespace std;

//function to calculate factorial
void factorial(int n, int *f)
{
	*f = 1;
	
	for (int i=1; i<=n; i++)
    {
    	*f *= i;
	}
}

int main()
{
	int fact, num;
	
	//user input
	cout << "Enter Number: ";
    cin >> num;
    
    //function call
    factorial(num, &fact);
    
   	cout << "Factorial of " << num << " is " << *(&fact) << endl;
    
}

#include<iostream>
using namespace std;

int main()
{
	//variables
	int num, remainder, reverse=0;
	int *n;
	//user input
	cout << "Enter numbers to be reversed: ";
    cin >> num;
    //assign address of num to n
    n = &num;
    
    /*cout << "Address of the entered number: " << n << endl << *n; */
    
    //loop to reverse
	while (*n != 0)
    {
    	remainder = *n % 10; 	//get the last digit 
    	reverse = reverse * 10 + remainder; 
    	*n /= 10; //the rest of the digits
	}
	cout << "Reversed: " << reverse << endl;
	   
}

#include<iostream>
using namespace std;

int main()
{
	int a; //variable

	//user input and assign
	cout << "Enter number: "; 
	cin >> a;
	
	//print the address 
	cout << "Address of the entered number: " << &a; 
	
	return 0;

}

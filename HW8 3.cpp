#include<iostream>
using namespace std;

int main()
{
	int a, *b;
	
	cout << "Enter number: "; 
	cin >> a;
	
	b = &a;
	
	cout << "Value of the address of the pointer of " << a << " is " << *(&a) << endl;
	
	return 0;
}

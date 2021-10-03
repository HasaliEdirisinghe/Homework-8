#include<iostream>
using namespace std;

//function to print pointer
void pointerPrinter(int *a)
{
	cout << *a << endl;
}

int main()
{
	int x;
	//user input
	cout << "Enter number: "; 
	cin >> x;
	//function call
	pointerPrinter(&x);
	
	return 0;
}

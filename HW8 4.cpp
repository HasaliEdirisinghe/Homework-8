#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Enter number: "; 
	cin >> a;
	
	// *-point to  &-address of
	cout << *(&a) << endl;
	
	return 0;
}

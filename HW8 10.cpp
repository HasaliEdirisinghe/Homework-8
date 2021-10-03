#include<iostream>
using namespace std;

//Assume that text is not seperated by spaces, tabs, etc.

int main()
{
	char s[200];
	char *str = s; //pointed to first character
	int length = 0; //count of characters is 0
	
	cout << "Enter any text: ";
    cin >> s;
    
    //loop to calculate lenght
	while ( *(str++) != '\0' ) 	//runs until all the next elements doesn't meet NULL character
    {
    	length++ ;
	}
    
    cout << "Length of the text '" << s << "' is " << length;
}




#include<iostream>
using namespace std;
//VOwELS
//Assume that text is not seperated by spaces, tabs, etc.

int main()
{
	char s[200];
	char *str = s; //pointed to first character
	int length = 0; //count of characters is 0
	int v=0,c=0;
	
	cout << "Enter any text: ";
    cin >> s;
    
    //loop to calculate lenght
	while ( *(str++) != '\0' ) 	//runs until all the next elements doesn't meet NULL character
    {
    	if(*str=='a' || *str=='A' || *str=='e' || *str=='E' || *str=='i' || *str=='I' || *str=='o' || *str=='O' || *str=='u' || *str=='U')
    	{
    		v++;
		}
		else
		{
			c++;			
		}
    	length++ ;
	}
    
    cout << "Number of vowels in the text '" << s << "' is " << v << endl;
    cout << "Number of constants in the text '" << s << "' is " << c << endl;
}




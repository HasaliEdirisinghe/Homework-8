#include<iostream>
using namespace std;

void sort(int num, int *pointer)
{
	int temp, i;
	
	//sorting
	for (i=0; i<num; i++)
	{
		for (int j=i+1; j<num; j++)
		{
			if (*(pointer+i) > *(pointer+j))
			{
				//swap
				temp = *(pointer+i);
				*(pointer+i) = *(pointer+j);
				*(pointer+j) = temp;
				
			}
		}
	}
	
	//display
	for (i=0; i<num; i++)
	{
		cout << *(pointer+i) <<" ";
	}
}

int main()
{
	int arr[] = {8,14,3,69,20}; //dummy values
	
	int v= sizeof(arr)/sizeof(arr[0]);
	
	
	
	sort(v, arr);
	
}

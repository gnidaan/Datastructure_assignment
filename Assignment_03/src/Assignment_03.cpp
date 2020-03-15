//============================================================================
// Name        : Assignment_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int arr[]={30,20,60,40,10,80};
	int iterator=0,comparator=0;

	for(int iteration=0;iteration<5;iteration++)
	{
		iterator++;
		for(int pos=iteration+1;pos<6;pos++)
		{
			comparator++;
			if(arr[iteration]>arr[pos])
			{

				int temp;
				temp=arr[pos];
				arr[pos]=arr[iteration];
				arr[iteration]=temp;
			}
		}
	}

	for(int i=0;i<6;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<"\niteration="<<iterator;
	cout<<"\ncomparator="<<comparator;

	return 0;
}

//============================================================================
// Name        : Assignment_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int arr[]={30,20,60,40,10,80};

	for(int iteration=0;iteration<5;iteration++)
	{
		for(int pos=0;pos<6-iteration-1;pos++)
		{
			if(arr[pos]>arr[pos+1])
			{
				int temp;
				temp=arr[pos];
				arr[pos]=arr[pos+1];
				arr[pos+1]=temp;
			}
		}
	}

	for(int i=0;i<6;i++)
	{
		cout<<" "<<arr[i];
	}

	return 0;
}

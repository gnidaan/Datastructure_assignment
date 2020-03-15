//============================================================================
// Name        : Assignment_05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[]={30,20,60,40,10,80};

	for (int i = 1; i < 6; ++i) {
		int j=i-1;
		int key=arr[i];
		while(j>=0 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
			arr[j+1]=key;
		}

	}
	for(int i=0;i<6;i++)
		{
			cout<<" "<<arr[i];
		}
	return 0;
}

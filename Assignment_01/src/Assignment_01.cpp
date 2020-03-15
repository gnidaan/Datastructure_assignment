//============================================================================
// Name        : Assignment_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[5],data;
	for(int i=0;i<5;i++){
		cout<<"enter the elements"<<endl;
		cin>>arr[i];
	}
	cout<<"enter the element to search"<<endl;
	cin>>data;
	for(int i=0;i<5;i++)
	{
		if(data==arr[i]){
			cout<<"found at location= "<<i+1<<endl;
		}
	}

	return 0;
}

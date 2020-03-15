//============================================================================
// Name        : Assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int rsearch(int arr[],int size,int data,int i)
{
	if(i==size)
	{
		return -1;
	}
	else if(arr[i]==data)
		return 1;
	else return rsearch(arr,size,data,i+1);
}
int main() {
	int arr[5],data;
	for(int i=0;i<5;i++){
		cout<<"enter the elements"<<endl;
		cin>>arr[i];
	}
	cout<<"enter the element to search"<<endl;
	cin>>data;

	int r=rsearch(arr,4,data,0);
	if(r==1){
		cout<<"found";
	}
	else cout<<"not found";
	return 0;
}

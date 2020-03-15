//============================================================================
// Name        : Assignment_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int binarysearch(int arr[],int u,int l,int key)
{
	if(u>l)
		return 0;
	int m=(u+l)/2;
	if(key==arr[m])
		return m+1;
	else if(key>arr[m])
		return binarysearch(arr,m+1,l,key);
	else
		return binarysearch(arr,u,m-1,key);

}
int main() {
	int arr[]={10,20,30,40,50,60,70,80,90};
	int y=binarysearch(arr,0,8,80);
	cout<<"output="<<y;

	return 0;
}

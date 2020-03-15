//============================================================================
// Name        : Assignment_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void binarysearch(int arr[],int size,int key)
{
	int l=0,u=size-1,m;
	while(l<=u)
	{
		m=(l+u)/2;
		if(key==arr[m])
		{
			cout<<"successful searching at index="<<m+1;
			return;

		}
		else if(key>arr[m]){
			l=m+1;
		}else
			u=m-1;
	}
}
int main() {
	int arr[]={10,20,30,40,50,60,70,80,90};
	binarysearch(arr,9,10);

	return 0;
}

//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[50];
	for (int i = 0; i < 10; ++i) {
		cout<<"enter the elements into array in sorted form only"<<endl;

		for (int j = 0; j < 10; ++j) {
			if(arr[i]>=arr[j]){
				cin>>arr[i];
				break;
			}
			else {
				cout<<"enter in sorted form"<<endl;			}
		}


	}

	for (int t = 0; t < 10; ++t) {
		cout<<arr[t]<<endl;

	}




	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A[10] = {6,11,25,8,15,7,12,20,9,14};
	int search;
	// cout<<"Enter Number to search "<<endl; 
	search = 14;

	int i = 0;
	for(i = 0 ; i<10;i++){
		if(search == A[i])
			break;
	}

	cout<<"the element is present at index "<<i<<endl;



	return 0;
}
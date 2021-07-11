#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A[10] = {6,8,13,17,20,22,25,28,30,35};
	int search;
	// cout<<"Enter Number to search "<<endl; 
	search = 25;
	 int l ,h ,mid;

	 l = 0 ; 
	 h = 9 ;

	 while (l <= h)
	 {
	 	mid = (l+h)/2;

	 	if(search == A[mid]){
	 		cout<<"Found at "<< mid<<endl;
	 		break;
	 	}
	 	else if (search<A[mid])
	 	{
	 		h = mid -1;
	 	}
	 	else
	 		l=mid+1;
	 // cout<<"Not Present "<<endl;	
	 }

	



	return 0;
}
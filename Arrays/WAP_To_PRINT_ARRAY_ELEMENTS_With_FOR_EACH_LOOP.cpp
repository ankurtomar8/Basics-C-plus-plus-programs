#include<bits/stdc++.h>


using namespace std;

int main()
{
	
	int A[] = {2,4,5,6,8,10}; // works on size of elements 
 	float B[] = {2.4f,3.4f,01,23,45}; // float type array
 	char C[] = {'A',66,'C',68};


	// for (int i = 0 ; i<10 ; i++){
	// 	// cout<<A[i]<<endl;

	// 	cout<<" "<<B[i];
	// }

 // for each loop
 	int sum = 0;
	for(int x:A){
		cout<<" "<<x;
		sum =sum + x; 
	}
	cout<<endl;
	cout<<" "<<sum<<endl;

	cout<<endl;

	for(float x:B){
		cout<<" "<<x;
	}
cout<<endl;
for(auto x:C){   // auto assigns automatic datatype 
					//by above looking array
		cout<<" "<<x;
	}

	

	return 0 ;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

int count = 1;	
for (int i = 0 ; i < 5 ; i++)
{

	 for(int j = 0 ; j < 5 ; j++ )
	 {
	 	if(i>j){
		cout<<" ";
		// count++;
		}
		else
			cout<<"*";
	}

	cout<<" "<<endl;
}
 

	return 0;
}

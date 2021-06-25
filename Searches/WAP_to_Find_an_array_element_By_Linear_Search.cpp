#include <bits/stdc++.h>
using namespace std;
 

 
// Driver code
int main()
{
   char str[]= "llooll";
   char str2[] = "llooll";
   
   int i = 0 , j =0;
    for (i = 0 , j = 0 ;  str[i] != '\0' && str2[j] != '\0'; i++ ,j++){

         if(str[i] != str2[j])
         {
            cout<<"Not palindrome";
            break;
         }
    }
          if(str[i] == str2[j]){
             cout<<"PaLindrome";
          }
   
   

   return 0;
}
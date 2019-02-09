// link https://www.codechef.com/problems/PRB01
#include <bits/stdc++.h> 
using namespace std; 
  
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1)  return false; 
  
    // Check from 2 to n-1 
    for (int i=2; i<n; i++) 
        if (n%i == 0) 
            return false; 
  
    return true; 
} 
  
// Driver Program to test above function 
int main() 
{ int t;
long int n;
cin>>t;
while(t--){
    cin>>n;
    if(isPrime(n))
    cout<<"yes"<<"\n";
    else
    cout <<"no"<<"\n";
}
   
    return 0; 
} 

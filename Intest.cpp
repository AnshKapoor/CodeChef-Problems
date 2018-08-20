
// problem link:https://www.codechef.com/problems/INTEST


#include <iostream>
using namespace std;
int main()
{ unsigned long long int n,k,t,p=0;
cin>>n>>k;
for(int i=0;i<n;i++)
{	cin>>t;
 if(t%k==0)
	 p++;
 cout<<endl;
}
cout<<p;
return(0);
}

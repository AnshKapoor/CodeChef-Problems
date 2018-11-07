// Problem link https://www.codechef.com/problems/HS08TEST/



#include <iostream>
using namespace std;
int main()
{
  float bal;
  float res;
  int check=1,amt;
cin>>amt;
cin>>bal;
if(amt%5!=0)
check=0;
if(amt+0.5>bal)
check=0;
if(check)
{res=bal-amt-0.5;
cout<<res;}
else
cout<<bal;
return 0;
    }

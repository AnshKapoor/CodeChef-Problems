#include <iostream>
#include <string>
#include <bitset>
#include <cstdlib>
using namespace std;
int main ()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n,k;
  cin>>n>>k;
  std::string str;
  std::bitset<1000> boo;
  while(k--){
    cin>>str;
    if(str =="CLOSEALL"){
        boo.reset();
        cout<<0<<"\n";
        
    }
    else{
        int c;
        cin>>c;
        boo = boo.flip(1000-c);
        cout<<boo.count();
        cout<<endl;
    }
  }

  return 0;
}

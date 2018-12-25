//Problem Link https://www.codechef.com/problems/TWTCLOSE
#include<iostream> 
#include<vector> 
#include<string>
  
using namespace std; 
  
int main() 
{ int n,k,size,ans=0;
  string str;
  vector<int> v; 
  cin>>n>>k;
  for(int i=1;i<=n;i++)
      v.push_back(i);
  while(k--){
        getline(cin,str);
        int num = Decode(str);
     std::vector<int>::iterator it = std::find(v.begin(), v.end(), num);
    int index = std::distance(v.begin(), it);
    v.erase(v.begin()+index);
    size = v.size();
    ans = n-size;
    cout<<ans<<"\n";
    
  }
  return 0;
}

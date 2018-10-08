//link : https://www.codechef.com/OCT18B/problems/CHSERVE/
include <iostream>
using namespace std;
void swap(int &x){
if(x==1)
x=0;
else
x=1;
}
int main(){
int t;
cin>>t;
long int p1,p2,k;
while(t--){
cin>>p1>>p2>>k;
int winner=0;
long int tot_sum = p1+p2;
long int start=0;
while(start<=tot_sum){
start+=k;
swap(winner);
}
if(winner==0)
cout<<"COOK"<<endl;
else 
cout<<"CHEF"<<endl;


}

return 0;
}

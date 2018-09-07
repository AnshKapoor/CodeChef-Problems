
//Problem link : https://www.codechef.com/problems/PALL01

#include <iostream>
using namespace std;
void output(int a){
    int rev=0;
    int number=a;
    while(a){
        int rem =a%10;
        rev = rev*10+rem;
        a/=10;
    }
    if(rev==number)
        cout<<"wins"<<endl;
    else
        cout<<"losses"<<endl;
}

int main(int argc, char** argv) {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        output(n);
       }
    
    return 0;
}

#include<iostream>
using namespace std ;
int main(){
    int t ;
    cin>>t;
    while(t--){
        long long int x ,y,z;
        cin>>x>>y>>z;
        long long int k =(x*z-x*y);
        cout<<k<<endl;
    }
}

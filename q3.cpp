// #include<iostream>
// using namespace std ;
// int main(){
//     int t ;
//     cin>>t;
//     while(t--){
//        long long  int n ,k,x;
//         int i=0;
//         cin>>n>>k>>x;
//         if(x==0){
//             for(int i =1;i<=n ;i++){
//                 cout<<i<<" ";
//             }
//         }
//         else{
//         if(x-1>k || k>n){
//             cout<<"-1"<<" ";
//         }
//         else{
//             while(n--){
//                 if(i<x){
//                     cout<<i<<" ";
//                     i++;
//                 }
//                 else{
//                 cout<<0<<" ";
//                 }
                
//             }
//         }
//     }
//     }
// }
#include<iostream>
using namespace std ;
int main(){
    int t ;
    cin>>t;
    while(t--){
       long long  int n ,k,x;
        int i=0;
        cin>>n>>k>>x;
        if(x>k ){
            cout<<-1<<" ";
        }
        
        else{
           while(n--){
              if(i<x){
                cout<<i<<" ";
                   i++;
               }

                 else{
                 i =0;
                 cout<<i<<" ";
                 i++;
                 }
                
             }
        }cout<<endl;
        }
        
    }

        
    
    



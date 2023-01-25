#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int t,n;
  cin>>t;
  while(t--){
   cin>>n;
   if(n==1){
    cout<<0<<endl;}
   else if(n==2){
    cout<<1<<endl;}
   else if(n==3){
    cout<<2<<endl;}
   else if(n%2==0){
    cout<<2<<endl;}
   else{
    cout<<3<<endl;
    }
   
  }
  
   
  
  
    return 0;
}
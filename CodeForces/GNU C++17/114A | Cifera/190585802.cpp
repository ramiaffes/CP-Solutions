#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int k,l;
 long long int result(0);
 cin>>k>>l;
 while(l%k==0){
  l/=k;
  result++;}
 if (l==1){
  cout<<"YES"<<endl;
  cout<<result-1<<endl;}
 else{
  cout<<"NO"<<endl;}
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}
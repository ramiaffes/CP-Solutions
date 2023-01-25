#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
    long long int t,n,k;
    cin>>t;
    while(t--){
  cin>>n>>k;
  long long int var=k/(n-1);
  if(k%(n-1)!=0){
  cout<<(var*n+k%(n-1))<<endl;
 }
 else{
  cout<<(var*n+k%(n-1)-1)<<endl;
  }
 
 
  
  
}
    
    
    return 0;
}
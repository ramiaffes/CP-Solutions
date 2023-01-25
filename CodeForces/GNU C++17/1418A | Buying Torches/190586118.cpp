#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
    long long int t;
    cin>>t;
    
    long long int x,y,k;
    while(t--){
  cin>>x>>y>>k;
  long double result=(k*y+k-1);
  long long int var=ceill(result/(x-1));
  cout<<(var+k)<<endl;
  }
   
 
 
 
   
   
  
  
   
    
    
 
    
   
    
    
    return 0;
}
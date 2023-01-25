#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int n,k;
 cin>>n>>k;
 vector<int>vect(n);
 vector<int>res;
 for(int i(0);i<n;i++){
  cin>>vect[i];
  if(vect[i]<=(5-k)){
   res.push_back(vect[i]);}}
 cout<<(res.size()/3)<<endl;
 
 
 
 
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}
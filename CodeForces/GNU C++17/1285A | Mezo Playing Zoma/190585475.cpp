#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int n;
 string ch;
 cin>>n>>ch;
 long long int res1(0);
 long long int res2(0);
 for(int i(0);i<n;i++){
  if(ch[i]=='L'){
   res1--;}
  else{
   res2++;}
  }
 cout<<(res2-res1+1)<<endl;
 
 
 
 
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}
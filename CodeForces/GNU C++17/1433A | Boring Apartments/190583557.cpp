#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int t;
 long long int x;
 string ch;cin>>t;
 while(t--){
 cin>>x;
 stringstream ss;  
     ss<<x; 
 ss>>ch;
 char rami=ch[0];
 long long int r=rami-'0';
 long long int d=ch.size();
 long long int som(0);
 for(long long int i(1);i<=d;i++){
  som+=i;}
 cout<<(som+10*(r-1))<<endl;
 
 }
 
 
 
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}
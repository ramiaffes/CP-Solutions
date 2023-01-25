 
#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 
  long long int t,a,b,p,n;
  string s;
  cin>>t;
  while(t--){ 
   cin>>a>>b>>p;
   cin>>s;
   n=s.length();
   long long int i=n-1;
   long long int p1=0;
   long long int p2=0;
   while((p>=0) and(i>=0)){
    i--;
    if((s[i]=='A') and(p1==0)){
     p-=a;
     p1++;
     p2=0;}
    if((s[i]=='B') and(p2==0)){
     p-=b;
     p2++;
     p1=0;}
     
     }
    cout<<(i+2)<<endl;
    
     
     
     
     
     }
  
  
  return 0;}
#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int t,n,q,l,r;
  string s;
  cin>>t;
  while(t--){
   cin>>n>>q;
   cin>>s;
   for(long long int i(0);i<q;i++){
    cin>>l>>r;
    char var1=s[l-1];
    char var2=s[r-1];
    if((s.find(var1)<(l-1))or(s.rfind(var2)>(r-1))){
     cout<<"Yes"<<endl;}  
    else{
     cout<<"NO"<<endl;}
    }
   
   
  }
  
   
  
  
    return 0;
}
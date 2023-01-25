#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
    long long int t,x,y;
    string s;
  cin>>t;
  while(t--){
   cin>>x>>y;
   if(abs(x-y)==0){
   cout<<(2*(min(x,y))+2*abs(x-y))<<endl;
   }
   else{
    cout<<(2*(min(x,y))+2*abs(x-y)-1)<<endl;
    }}
   
   
   
  
    return 0;
}
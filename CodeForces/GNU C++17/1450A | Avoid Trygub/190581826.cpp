#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>s;
  sort(s.begin(),s.end());
  cout<<s<<endl;}
 
   
   
  
    return 0;
}
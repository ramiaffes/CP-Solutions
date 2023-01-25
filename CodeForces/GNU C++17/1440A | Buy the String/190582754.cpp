#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
    long long int t,n,c0,c1,h;
    string s;
  cin>>t;
  while(t--){
   cin>>n>>c0>>c1>>h;
   cin>>s;
   cout<<(min(min((h*count(s.begin(),s.end(),'0')+c1*(count(s.begin(),s.end(),'1')+count(s.begin(),s.end(),'0'))),(h*count(s.begin(),s.end(),'1')+c0*(count(s.begin(),s.end(),'0')+count(s.begin(),s.end(),'1')))),c0*(count(s.begin(),s.end(),'0'))+c1*(count(s.begin(),s.end(),'1'))))<<endl;
 }
 
    return 0;
}
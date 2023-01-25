#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
int main()
{
 fast;
 long long int n,m,a,b;
 cin>>n>>m>>a>>b;
 if(b>=m*a){
  cout<<(n*a)<<endl;}
 else{
  cout<<((b*(n/m))+min(((n%m)*a),b))<<endl;}
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
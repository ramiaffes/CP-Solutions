#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 string s;
 long long int n,b,a,t,k;
    cin>>t;
    while(t--){
  cin>>n>>k;
  vector<long long int>vect(n);
  long long int som=0;
  bool test=false;
  map<long long int,bool>vis;
  for(long long int i(0);i<n;i++){cin>>vect[i];vis[vect[i]]=1;}
 for(long long int i(0);i<n;i++){
  if(vis[k+vect[i]]==1){test=true;break;}}
 if(test==true)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}
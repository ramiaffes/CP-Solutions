#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  map<long long int,bool>vis;
  for(long long int i(0);i<n;i++){
   cin>>vect[i];vis[vect[i]]=1;}
  vector<long long int>res;
  for(long long int i(1);i<n;i++){
   res.push_back(vect[0]^vect[i]);}
  sort(res.begin(),res.end());
  bool test=true;
  long long int val=-1;
  for(auto v:res){
   test=true;
   for(long long int i(0);i<n;i++){
    if(vis[vect[i]^v]==0){test=false;break;}}
   if(test==true){
    val=v;break;}
   }
  cout<<val<<endl;
  
  
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
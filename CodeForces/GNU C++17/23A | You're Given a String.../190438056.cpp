#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e6;
map<string,long long int>vis;
 
int main()
{
 fast;
   string n;
   cin>>n;
   long long int ans=0;
   for(long long int k(1);k<=n.length();k++){
    for(long long int i(0);i<(n.length()-k+1);i++){
     vis[n.substr(i,k)]+=1;}}
 for(auto v:vis){
  long long int val=v.first.length();
  if(v.second>=2)ans=max(ans,val);}
cout<<ans<<endl;
 
  
   
   
 
 
 
 
 
 
return 0;}
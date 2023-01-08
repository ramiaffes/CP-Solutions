#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 long long int t,n,k; 
 cin>>k;
 map<long long int,vector<pair<long long int,long long int>>>hashing;
 for(long long int j(0);j<k;j++){
  cin>>n;
  long long int som=0;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
  map<long long int,bool>vis;
  for(long long int i(0);i<n;i++){
   if(vis[som-vect[i]]==1)continue;
   hashing[som-vect[i]].push_back(make_pair(j+1,i+1));vis[som-vect[i]]=1;}
  }
bool test=false;
for(auto v:hashing){
 if(hashing[v.first].size()>=2){test=true;cout<<"YES"<<endl;
  cout<<hashing[v.first][0].first<<" "<<hashing[v.first][0].second<<endl;cout<<hashing[v.first][1].first<<" "<<hashing[v.first][1].second<<endl;break;}}
if(test==false)cout<<"NO"<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
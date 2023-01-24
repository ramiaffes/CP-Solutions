#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,d,t;
 string a,b;
 cin>>n>>d;
 map<pair<string,string>,vector<long long int>>hashing;
 set<pair<string,string>>res1;
 for(long long int i(0);i<n;i++){
  cin>>a>>b>>t;
  hashing[make_pair(a,b)].push_back(t);
  }
 for(auto v:hashing){
  pair<string,string>mypair=make_pair(v.first.second,v.first.first);
  for(long long int i(0);i<hashing[v.first].size();i++){
   auto it=lower_bound(hashing[mypair].begin(),hashing[mypair].end(),hashing[v.first][i]);
   long long int val=it-hashing[mypair].begin()-1;
   if(val>=0){
   if((hashing[v.first][i]-hashing[mypair][val])<=d){
    if(mypair.first<mypair.second){
    res1.insert(mypair);}
    else res1.insert(v.first);break;}}}}
 
cout<<res1.size()<<endl;
for(auto v:res1){
 cout<<v.first<<" "<<v.second<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
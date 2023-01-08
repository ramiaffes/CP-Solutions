#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,s,p,q,a,b;
 cin>>n;
 vector<pair<long long int,long long int>>vect(n);
 map<long long int ,vector<long long int>>vis;
 set<long long int>res;
 for(long long int i(0);i<n;i++){cin>>a>>b;vis[a].push_back(0);vis[b].push_back(1);res.insert(a);res.insert(b);}
 map<long long int,long long int>hashing;
 vector<long long int>res1(res.begin(),res.end());
 sort(res1.begin(),res1.end());
 long long int val=0;
 for(auto v:res1){
  for(auto v1:vis[v]){
   if(v1==0)val++;
   else val--;}
  hashing[v]=val;
  }
long long int ans=0;
for(auto v:res1){
 ans=max(ans,hashing[v]); }
for(auto v:res1){
 if(ans==hashing[v]){
  cout<<v<<" "<<hashing[v]<<endl;break;}}
return 0;}
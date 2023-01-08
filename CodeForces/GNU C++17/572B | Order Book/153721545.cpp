#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,s,p,q;
 cin>>n>>s;
 char d;
 map<char,vector<pair<long long int,long long int>>>res;
 for(long long int i(0);i<n;i++){
  cin>>d>>p>>q;
  res[d].push_back(make_pair(p,q));
  }
map<long long int,long long int>hashing;
for(auto v:res['B']){
 hashing[v.first]+=v.second;}
res['B'].clear();
for(auto v:hashing){
 res['B'].push_back(make_pair(v.first,v.second));}
hashing.clear();
for(auto v:res['S']){
 hashing[v.first]+=v.second;}
res['S'].clear();
for(auto v:hashing){
 res['S'].push_back(make_pair(v.first,v.second));}
sort(res['S'].begin(),res['S'].end());
sort(res['B'].begin(),res['B'].end());
reverse(res['B'].begin(),res['B'].end());
 
long long int val1=res['S'].size();
long long int val2=res['B'].size();
reverse(res['S'].begin(),res['S'].begin()+min(s,val1));
for(long long int i(0);i<min(s,val1);i++){
 cout<<'S'<<" "<<res['S'][i].first<<" "<<res['S'][i].second<<endl;}
for(long long int i(0);i<min(s,val2);i++){
 cout<<'B'<<" "<<res['B'][i].first<<" "<<res['B'][i].second<<endl;} 
 
 
return 0;}
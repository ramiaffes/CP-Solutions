#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
map<char,vector<long long int>>res;
int main()
{
 fast;
 long long int n,k,m;
 string s1;
 string s2;
 cin>>n;
 cin>>s1;
 cin>>m;
 map<char,long long int>res;
 set<char>se;
 map<char,vector<long long int>>res1;
 for(long long int i(0);i<n;i++){
  se.insert(s1[i]);}
 for(long long int i(0);i<n;i++){
  res[s1[i]]++;
  for(auto v:se){
   res1[v].push_back(res[v]);}}
 for(long long int i(0);i<m;i++){
  cin>>s2;
   map<char,long long int>hashing;
  for(long long int i(0);i<s2.length();i++){
   hashing[s2[i]]++;}
 long long int ans=0;
   for(auto v:hashing){
    auto it=lower_bound(res1[v.first].begin(),res1[v.first].end(),hashing[v.first]);
    long long int val=it-res1[v.first].begin()+1;
    ans=max(ans,(val));}
 cout<<ans<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,p,q,r;
 string s;
 string t;
 cin>>n;
 cin>>s;
 cin>>t;
 map<pair<char,char>,vector<long long int>>hashing;
 for(long long int i(0);i<n;i++){
  if(s[i]!=t[i]){
   hashing[make_pair(s[i],t[i])].push_back(i);
}}
if((hashing[make_pair('a','b')].size()+hashing[make_pair('b','a')].size())%2!=0){
 cout<<-1<<endl;}
else{
 if(hashing[make_pair('a','b')].size()%2==1){
  cout<<((hashing[make_pair('a','b')].size()-1)/2+(hashing[make_pair('b','a')].size()+1)/2+1)<<endl;
  cout<<(hashing[make_pair('a','b')].back()+1)<<" "<<(hashing[make_pair('a','b')].back()+1)<<endl;
  for(long long int i(0);i<(hashing[make_pair('a','b')].size()-1);i+=2){
   cout<<(hashing[make_pair('a','b')][i]+1)<<" "<<(hashing[make_pair('a','b')][i+1]+1)<<endl;
   }
  for(long long int i(0);i<(hashing[make_pair('b','a')].size()-1);i+=2){
   cout<<(hashing[make_pair('b','a')][i]+1)<<" "<<(hashing[make_pair('b','a')][i+1]+1)<<endl;
   }
  cout<<((hashing[make_pair('a','b')][hashing[make_pair('a','b')].size()-1])+1)<<" "<<((hashing[make_pair('b','a')][hashing[make_pair('b','a')].size()-1])+1)<<endl;
  }
 else{
  cout<<(hashing[make_pair('a','b')].size()/2+(hashing[make_pair('b','a')].size())/2)<<endl;
  for(long long int i(0);i<(hashing[make_pair('a','b')].size());i+=2){
   cout<<(hashing[make_pair('a','b')][i]+1)<<" "<<(hashing[make_pair('a','b')][i+1]+1)<<endl;
   }
  for(long long int i(0);i<(hashing[make_pair('b','a')].size());i+=2){
   cout<<(hashing[make_pair('b','a')][i]+1)<<" "<<(hashing[make_pair('b','a')][i+1]+1)<<endl;
   }
  }}
 
 
  
 
  
 
 
 
 
 
return 0;}
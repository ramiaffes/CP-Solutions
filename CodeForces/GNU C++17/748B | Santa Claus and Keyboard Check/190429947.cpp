#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;
 
 
int main()
{
 fast;
long long int m;
string s,t;
cin>>s;
cin>>t;
long long int n=t.length();
map<char,vector<long long int>>res;
map<char,vector<long long int>>res1;
set<pair<char,char>>vec;
for(long long int i(0);i<n;i++){
 res[s[i]].push_back(i);}
for(long long int i(0);i<n;i++){
 res1[t[i]].push_back(i);}
bool test=true;
for(long long int i(0);i<n;i++){
 if(s[i]!=t[i]){
  if((res1[t[i]]!=res[s[i]])or(res[t[i]]!=res1[s[i]])){
   test=false;break;}
  else{
   vec.insert(make_pair(min(s[i],t[i]),max(t[i],s[i])));}}}
if(test==false){
 cout<<-1<<endl;}
else{
 cout<<vec.size()<<endl;
 for(auto v:vec){
  cout<<v.first<<" "<<v.second<<endl;}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
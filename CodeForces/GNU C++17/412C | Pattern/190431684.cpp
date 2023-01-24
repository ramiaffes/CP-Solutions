#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
long long int n;
string s;
string s1;
string s2;
cin>>n;
map<long long int,set<char>>adj;
string res;
for(long long int i(0);i<n;i++){
 cin>>s;
 for(long long int i(0);i<s.length();i++){
  if(s[i]!='?'){
  adj[i].insert(s[i]);}}}
for(long long int i(0);i<s.length();i++){
 if(adj[i].size()>=2){
  res.append("?");}
 else  if(adj[i].size()==1){
  for(auto ch:adj[i]){
   string ch1(1,ch);
  res.append(ch1);}}
 else{
  res.append("x");}
 }
cout<<res<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
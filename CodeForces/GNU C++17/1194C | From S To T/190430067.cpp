#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;vector<string> out;
map<long long int,bool>vis;
int main()
{
 fast;
long long int n,k,q;
string s,t,p;
cin>>q;
while(q--){
 cin>>s;
 cin>>t;
 cin>>p;
 map<char,long long int>hashing;
 for(long long int i(0);i<p.length();i++){
  hashing[p[i]]++;}
 map<char,long long int>hashing1;
 long long int i=0;
 long long int val=0;
 if(t.length()<s.length()){
  cout<<"NO"<<endl;}
 else{
 while((val<s.length())and(i<(t.length()))){
  if(t[i]==s[val]){
   i++;
   val++;
   continue;}
  else{
   hashing1[t[i]]++;
   i++;}
  
  }
 if(val<s.length()){
  cout<<"NO"<<endl;}
 else{
  for(long long int j(i);j<t.length();j++){
   hashing1[t[j]]++;}
  bool test=true;
  for(auto v:hashing1){
   if(hashing[v.first]<hashing1[v.first]){test=false;break;}}
  if(test==false)cout<<"NO"<<endl;
  else cout<<"Yes"<<endl;
  }}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
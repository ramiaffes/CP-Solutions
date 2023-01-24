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
string s,t;
long long int n,k;
cin>>s;
cin>>t;
map<char,long long int>hashing;
map<char,long long int>hashing1;
for(long long int i(0);i<s.length();i++){
 hashing1[s[i]]++;}
for(long long int i(0);i<t.length();i++){
 hashing[t[i]]++;}
bool test=false;
long long int ya=0;
long long int wh=0;
for(auto v:hashing1){
 ya+=min(hashing1[v.first],hashing[v.first]);
 long long int val=min(hashing1[v.first],hashing[v.first]);
 hashing1[v.first]-=val;
 hashing[v.first]-=val;
 }
for(auto v:hashing1){
 if(islower(v.first)){
 wh+=min(hashing1[v.first],hashing[toupper(v.first)]);}
 else{
  wh+=min(hashing1[v.first],hashing[tolower(v.first)]);}}
cout<<ya<<" "<<wh<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
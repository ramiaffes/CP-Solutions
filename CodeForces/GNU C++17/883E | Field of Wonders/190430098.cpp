#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
long long int n,q,m,l,r,k,t;
string s,p;
cin>>n;
cin>>s;
map<char,long long int>hashing;
for(long long int i(0);i<n;i++){
 hashing[s[i]]++;}
cin>>m;
vector<string>vect(m);
for(long long int i(0);i<m;i++){
 cin>>vect[i];}
bool test=true;
long long int res1=0;
map<char,long long int>vis;
for(long long int j(0);j<m;j++){
 test=true;
 for(long long int i(0);i<n;i++){
  if(((vect[j][i]!=s[i])and(isalpha(s[i])))or((s[i]=='*')and(s.find(vect[j][i])!=string::npos))){
   test=false;break;}}
 if(test==false){res1++;continue;}
 map<char,long long int>hashing1;
 for(long long int i(0);i<n;i++){
  hashing1[vect[j][i]]=1;}
 for(auto v:hashing1){
  vis[v.first]++;}
 }
long long int res=0;
for(auto v:vis){
 if(vis[v.first]==(m-res1))res++;}
cout<<(res-hashing.size()+(hashing['*']!=0))<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
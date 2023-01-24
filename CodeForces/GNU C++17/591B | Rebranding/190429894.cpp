#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;
 
 
int main()
{
 fast;
long long int n,m;
string s;
cin>>n>>m;
cin>>s;
char x;
map<char,vector<long long int>>res;
for(long long int i(0);i<n;i++){
 res[s[i]].push_back(i);}
map<char,char>mh;
char y;
for(auto v:s){
 mh[v]=v;}
for(long long int i(0);i<m;i++){
 cin>>x>>y;
 swap(mh[x],mh[y]);
 
}
map<char,vector<long long int>>res1;
for(long long  int i(0);i<26;i++){
 char var=(char)(97+i);
 res1[var]=res[mh[var]];}
string ch(n,' ');
for(auto v:res1){
 for(long long int i(0);i<res1[v.first].size();i++){
  ch[res1[v.first][i]]=v.first;}}
cout<<ch<<endl; 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
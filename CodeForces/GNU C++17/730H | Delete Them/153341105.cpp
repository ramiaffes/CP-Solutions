#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 long long int n,m,a;
 cin>>n>>m;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 map<long long int,bool>vis;
 for(long long int i(0);i<m;i++){cin>>a;vis[a-1]=1;}
 set<string>res1;
 set<string>res2;
 for(long long int i(0);i<n;i++){
  if(vis[i]==1){
   res1.insert(vect[i]);}
 else{
  res2.insert(vect[i]);}}
map<long long int,set<char>>res3;
long long int ans=1e9;
long long int ans1=0;
for(auto v:res1){
 long long int val23=v.length();
 ans=min(ans,val23);
 ans1=max(ans1,val23);}
if(ans!=ans1){
 cout<<"No"<<endl;}
else{
for(auto v:res1){
 for(long long int d(0);d<v.length();d++){
  res3[d].insert(v[d]);}}
string str;
for(long long int i(0);i<100;i++){
 if(res3[i].size()==0)break;
 if(res3[i].size()==1){
  for(auto v3:res3[i]){
  string val1(1,v3);
  str.append(val1);}}
 else{
  str.append("?");}}
bool test=true;
for(auto v:res2){if(v.length()!=str.length()){continue;}
 test=false;
 for(long long int i(0);i<str.length();i++){
  if((str[i]!=v[i])and(str[i]!='?')){test=true;break;}}
 if(test==false)break;
 }
if(test==false){
 cout<<"No"<<endl;}
else {cout<<"Yes"<<endl;cout<<str<<endl;}}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
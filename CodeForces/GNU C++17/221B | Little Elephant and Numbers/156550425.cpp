#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast;
long long int x;
cin>>x;
long long int i=1;
long long int som=0;
string str2=to_string(x);
map<long long int,bool>vis;
for(auto v:str2){vis[v]=1;}
for(i=1;i*i<x;i++){
 if(x%i==0){
  string str=to_string(i);
  for(auto v:str){
   if(vis[v]==1){som++;break;}}
 string str3=to_string(x/i);
  for(auto v:str3){
   if(vis[v]==1){som++;break;}}
  }
 }
if(i*i==x){
string str=to_string(i);
for(auto v:str){
   if(vis[v]==1){som++;break;}}}
cout<<som<<endl;
 
   return 0;}
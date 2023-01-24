#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,t,k;
 cin>>n;
 string s;
 cin>>s;
 long long int res=0;
 for(long long int i(26);i>=1;i--){
  char var=i+97;
  char var1=i-1+97;
  bool test=true;
  while(test==true){
   test=false;
   map<long long int,bool>vis;
  for(long long int d(0);d<n;d++){
   if(s[d]==var){
    if(d>=1){
     if(s[d-1]==var1){
      test=true;
      vis[d]=1;}}
     if(d<(n-1)){
     if(s[d+1]==var1){
      test=true;
      vis[d]=1;}}
     
    
    }
    }
  long long int var3=0;
  for(long long int j(n-1);j>=0;j--){
   if(vis[j]==1){
    s.erase(j,1);
    var3++;
    res++;}}
  n-=var3;
  }}
 cout<<res<<endl;
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
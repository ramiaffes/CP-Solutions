#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int t,n,k,a,b;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  vector<string>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  map<string,bool>vis;
  for(long long int i(0);i<n;i++){
   vis[vect[i]]=1;}
  for(long long int i(0);i<n;i++){
   bool test=false;
   for(long long int j(1);j<vect[i].length();j++){
    if((vis[vect[i].substr(0,j)]==1)and(vis[vect[i].substr(j,vect[i].length()-j)]==1)){
     test=true;
     cout<<1;break;}}
   if(test==false)cout<<0;}
  cout<<endl;
  
  
 }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
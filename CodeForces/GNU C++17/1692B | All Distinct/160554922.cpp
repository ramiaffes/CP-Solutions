#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
int main()
{
 fast; 
 long long int n,m,u,v,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  long long int som1=0;
  long long int som2=0;
  map<long long int,long long int>hashing;
  for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;}
  for(auto v:hashing){
   if(v.second%2==0)som1++;
   else som2++;}
  if(som1%2==1){
   cout<<(hashing.size()-1)<<endl;}
  else{
   cout<<hashing.size()<<endl;}
  }
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
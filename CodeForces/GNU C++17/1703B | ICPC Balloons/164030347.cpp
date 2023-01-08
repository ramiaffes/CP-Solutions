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
  cin>>s;
  long long int som=0;
  map<char,long long int>hashage;
  for(long long int i(0);i<n;i++){
   hashage[s[i]]++;}
  for(auto v:hashage){
   if(hashage[v.first]==0)continue;
   if(hashage[v.first]==1)som+=2;
   else som+=2+(hashage[v.first]-1);}
  cout<<som<<endl;
  
  
 }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
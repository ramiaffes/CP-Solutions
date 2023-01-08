#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int t,n,k,a,b;
 string w;
 cin>>t;
 while(t--){
  cin>>n>>k;
  vector<long long int>vect(n);
  map<long long int,long long int>m1;
  map<long long int,long long int>m;
  for(long long int i(0);i<n;i++){cin>>vect[i];
   if(m1[vect[i]]==0){
    m1[vect[i]]=i+1;}
   else{
   m1[vect[i]]=min(m1[vect[i]],i+1);}
   if(m[vect[i]]==0){
    m[vect[i]]=i+1;}
   else{
   m[vect[i]]=max(m[vect[i]],i+1);}
   }
  
  for(long long int i(0);i<k;i++){cin>>a>>b;
  if((m1[a]==0)or(m1[b]==0)){cout<<"NO"<<endl;continue;}
  if(m1[a]<=m[b]){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
  }
  
 }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
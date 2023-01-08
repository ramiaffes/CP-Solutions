#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 long long int n,x,m,t,l,r;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 map<long long int,bool>vis;
 for(long long int i(1);i<(n-1);i++){
  if(vect[i+1]==(vect[i-1]+2)){
   vis[i]=1;
   }
  }
 long long int ans=0;
 long long int som=0;
 for(long long int i(0);i<n;i++){
  if(vis[i]==0){
   if((i==(n-2))and(vect[i]==999)){
    som++;}
   if((i==1)and(vect[i]==2)){
    som++;}
   ans=max(ans,som);
   som=0;}
  else{
   if((i==(n-2))and(vect[i]==999)){
    som++;}
   if((i==1)and(vect[i]==2)){
    som++;}
   som++;}}
 ans=max(ans,som);
 cout<<ans<<endl;
 
   
 
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 
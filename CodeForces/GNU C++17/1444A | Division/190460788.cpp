#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int d,long long int som){
 long long int p=1;
 for(long long int i(0);i<som;i++){
  p*=d;}
 return p;}
int main()
{
 fast; 
 long long int p,q,t;
 cin>>t;
 while(t--){
  cin>>p>>q;
  if(p%q!=0){
   cout<<p<<endl;
   }
  else{
   vector<long long int >res1;
   long long int i=0;
   long long int ans=0;
   for(i=2;i<=sqrt(q);i++){
    if((q%i==0)){
     long long int p1=p;
     while(p1%(q)==0){
      p1/=(i);}
     ans=max(ans,p1);
     }
    
    }
     for(i=2;i<=sqrt(q);i++){
    if((q%i==0)){
     long long int p1=p;
     while((p1%q)==0){
      p1/=(q/i);}
     ans=max(ans,p1);}
    
    }
    long long int p1=p;
    while(p1%q==0){
     p1/=q;}
    ans=max(ans,p1);
     cout<<ans<<endl;}}
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
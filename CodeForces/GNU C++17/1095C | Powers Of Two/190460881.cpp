#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 long long int p=1;
 vector<long long int>res;
 long long int n1=n;
 while(n!=0){
  if(n%2!=0){
  res.push_back(p);
  }
  p*=2;
  n/=2;}
  if(res.size()>k)cout<<"NO"<<endl;
  else if(res.size()==k){
   cout<<"YES"<<endl;
   for(long long int i(0);i<res.size();i++){cout<<res[i]<<" ";}}
  else{
   if(n1<k){cout<<"NO"<<endl;}
   else{
    cout<<"YES"<<endl;
    long long int cnt=res.size();
    long long int mh=0;
    while(cnt<k){
     while((mh<res.size())and(res[mh]==1)){
      mh++;}
     
     if(mh!=res.size()){
     res[mh]/=2;
     cnt++;
     res.insert(res.begin()+mh+1,res[mh]);
     }
     
     }
    for(long long int mh(0);mh<res.size();mh++){
     cout<<res[mh]<<" ";}
    }
    
   
    
    
    
   
  }
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 long long int n,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  vector<long long int>res;
  res.push_back(vect[0]);
  int test=0;
  if((vect[1]-vect[0])<0)test=1;
  for(long long int i(1);i<(n);i++){
   if((vect[i]>vect[i-1])and(test==0)){
    continue;}
  else if((vect[i]>vect[i-1])and(test==1)){
   res.push_back(vect[i-1]);
   test=1-test;}
 else if((vect[i]<vect[i-1])and(test==0)){
  res.push_back(vect[i-1]);
  test=1-test;
  }
 else{continue;}
   
   }
 res.push_back(vect[n-1]);
 cout<<res.size()<<endl;
 for(auto v:res)cout<<v<<" ";
 cout<<endl;
 }
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
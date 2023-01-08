#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int t,n,l,r;
 cin>>t;
 while(t--){
  cin>>n>>l>>r;
  bool test=true;
  vector<long long int>res;
  for(long long int i(1);i<=n;i++){
   if(((r/i)*i)<l){
    test=false;break;}
  else{
   res.push_back(((r/i)*i));}}
  if(test==false)cout<<"NO"<<endl;
  else {
   cout<<"YES"<<endl;
   for(auto v:res)cout<<v<<" ";
      cout<<endl;
  }
  
  
 }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
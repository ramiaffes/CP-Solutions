#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
 
int main()
{
 fast; 
 long long int n,k,q;
 long long int val,id;
 cin>>n>>k>>q;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<long long int>res;
 for(long long int i(0);i<q;i++){
  cin>>val>>id;
  if(val==2){
   if(find(res.begin(),res.end(),id)!=res.end()){
    cout<<"YES"<<endl;}
   else{
    cout<<"NO"<<endl;}}
  else{
   if(res.size()<k){
    res.push_back(id);
       
   }
   else{
    long long int ans=1e9;
    for(long long int j(0);j<res.size();j++){
     ans=min(ans,vect[res[j]-1]);
    }
    if(ans>vect[id-1])continue;
    for(long long int j(0);j<res.size();j++){
     if(ans==vect[res[j]-1]){
      res[j]=id;break;}}
    }
   }}
  
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
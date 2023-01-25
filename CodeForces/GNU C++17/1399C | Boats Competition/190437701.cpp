#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
int main()
{
 fast;
 long long int n,m,a,b,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  set<long long int>res;
  for(long long int i(0);i<(n-1);i++){
   for(long long int j(i+1);j<n;j++){
    res.insert(vect[i]+vect[j]);}}
  sort(vect.begin(),vect.end());
  long long int ans=0;
  for(auto v:res){
  long long int i=0;
  long long int j=n-1;
  long long int som=0;
  while(i<j){
   if((vect[i]+vect[j])==v){
    som++;
    i++;
    j--;
    }
   else if((vect[i]+vect[j])<v){
    i++;}
   else{
    j--;}
   }
  ans=max(ans,som);
  
 }
 cout<<ans<<endl;}
 
 
 
 
 
 
 
  
 
 
 
 
 
return 0;}
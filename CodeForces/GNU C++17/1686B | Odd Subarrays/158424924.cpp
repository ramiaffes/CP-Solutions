#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  long long int res=0;
  long long int ans=0;
  for(long long int i(0);i<n;i++){
   if(ans>vect[i]){
    res++;
    ans=0;}
   else{
    ans=max(ans,vect[i]);}}
  cout<<res++<<endl;
  
  
 }
  
 
 
 
 
 
    
    
return 0;}
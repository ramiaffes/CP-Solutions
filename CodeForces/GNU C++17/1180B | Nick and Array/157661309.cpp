#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}return p;}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,k,t;
    cin>>n;
    vector<long long int>vect(n);
    for(long long int i(0);i<n;i++)cin>>vect[i];
  for(long long int i(0);i<n;i++){
    if((vect[i]>=0)){vect[i]=-vect[i]-1;}}
 if(n%2==0){
  for(auto v:vect)cout<<v<<" ";}
 else{
  long long int ans=0;
  for(long long int i(0);i<n;i++){
   if(vect[i]<0){ans=max(ans,-vect[i]);}}
  for(long long int i(0);i<n;i++){
   if((-vect[i])==ans){vect[i]=-vect[i]-1;break;}}
  for(auto v:vect)cout<<v<<" ";
  }
  
  
  
  
  
 
    
    
 
    
    
 
    
    
return 0;} 
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
int main()
{
 fast;
 long long int n,m,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  long long int som=0;
  for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
  sort(vect.begin(),vect.end());
  long long int j=n-1;
  long long int i=0;
  long long int res=0;
  bool test=false;
  map<long long int,long long int>dp;
  if(som*2%n!=0){
   cout<<0<<endl;}
  else{
  while(i<j){
   if((vect[i]+vect[j])<(som*2/n)){
    i++;}
   else if((vect[i]+vect[j])>(som*2/n)){
    j--;}
   else{
    if(i<(n-1)){
    if(vect[i]==vect[i+1]){
     dp[vect[i]]++;
     i++;
     if(i>=j)test=true;
     continue;}}
    if(j>=1){
    if(vect[j]==vect[j-1]){
     dp[vect[j]]++;
     j--;
     continue;}}
    if(vect[j]==vect[i]){
     res+=(dp[vect[j]])*(dp[vect[j]]+1)/2;}
    else{
     res+=((dp[vect[j]]+1)*(dp[vect[i]]+1));}
     j--;
     i++;}
    
    }
   if(test==true)res+=(dp[vect[j]])*(dp[vect[j]]+1)/2;
  cout<<res<<endl;}}
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
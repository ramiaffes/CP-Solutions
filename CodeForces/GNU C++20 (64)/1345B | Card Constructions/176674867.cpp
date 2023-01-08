#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,long long int>dp;
map<long long int,bool>vis;
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>dp(5*1e4);
  dp[0]=2;
  long long int som10=5;
  for(long long int i(1);i<5*1e4;i++){
   dp[i]=dp[i-1]+som10;
   som10+=3;}
   long long int som=0;
   while(n>=0){
   auto it=upper_bound(dp.begin(),dp.end(),n);
   if(it==dp.begin())break;
   som++;
   n-=*(it-1);}
  cout<<som<<endl;
 }
 
 
   
 
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 
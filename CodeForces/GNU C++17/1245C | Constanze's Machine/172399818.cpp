#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,long long int>hashing;
map<long long int,long long int>hashing1;
long long int som=0;
long long int val=1;
 
 
int main()
{
 fast; 
 string s;
 string s1;
 cin>>s;
 vector<string>res;
 bool test=true;
 for(int i=0;i<(s.length());i++){
  if((s[i]=='w')or(s[i]=='m'))test=false;
  else if(s[i]=='u'){
   s1.append("u");}
  else{
   if(s1.empty()==false){
    res.push_back(s1);}
   s1.clear();}
  } 
 if(s1.empty()==false)res.push_back(s1);
 s1.clear();
 for(int i=0;i<(s.length());i++){
  if(s[i]=='n'){
   s1.append("n");}
  else{
   if(s1.empty()==false){
    res.push_back(s1);}
   s1.clear();}
  }
 if(s1.empty()==false)res.push_back(s1);
 if(test==false){
  cout<<0<<endl;}
 else{
 vector<long long int>res1;
 for(auto v:res){
  vector<long long int>dp(v.length());
  dp[0]=1;
  dp[1]=2;
  for(int i=2;i<v.length();i++){
   dp[i]=dp[i-1]+dp[i-2];
   dp[i]=dp[i]%1000000007;
   }
  res1.push_back(dp[v.length()-1]);}
 long long int p=1;
 for(auto v:res1){p*=v;p=p%1000000007;}
 cout<<p<<endl;}
  
return 0;}
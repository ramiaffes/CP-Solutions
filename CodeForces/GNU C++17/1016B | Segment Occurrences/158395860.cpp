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
 long long int n,m,q,l,r;
 cin>>n>>m>>q;
 string s,t;
 cin>>s;
 cin>>t;
 map<pair<long long int ,long long int>,long long int>dp;
 for(long long int i(0);i<(n);i++){
  string str3;
  for(long long int j(i);j<n;j++){
   dp[make_pair(i,j)]=dp[make_pair(i,j-1)];
   string str2(1,s[j]);
   str3.append(str2);
   if(str3.length()==t.length()){
    if(str3==t){
     dp[make_pair(i,j)]++;}
    str3.erase(0,1);}
   }}
 for(long long int i(0);i<q;i++){
  cin>>l>>r;
  cout<<(dp[make_pair(l-1,r-1)])<<endl;
  }
 
 
 
 
 
 
 
 
 
    
    
return 0;}
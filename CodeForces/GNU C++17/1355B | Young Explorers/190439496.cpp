#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
map<long long int,long long int>vis;
int main()
{
 fast;
   long long int n,m,l,r,t;
   cin>>t;
   while(t--){
   cin>>n;
   vector<long long int>vect(n);
   vector<pair<long long int,long long  int>>dp;
   for(long long int i(0);i<n;i++)cin>>vect[i];
   sort(vect.begin(),vect.end());
   long long int som=1;
   long long int som2=vect[0];
   long long int som1=0;
   bool test=true;
   for(long long int i(1);i<n;i++){
    if(vect[i]==vect[i-1]){
     som++;
     test=true;
   }
   else{
    som1+=som/som2;
    test=false;
    if(som2==1){dp.push_back(make_pair(i-1,0));}
    else{
    dp.push_back(make_pair(i-1,som%som2));} som2=vect[i];
    som=1;}}
 if(test!=false){
  som1+=som/som2;
  if(n>=2){
  if(som2==1){dp.push_back(make_pair(n-2,0));}
    else{
    dp.push_back(make_pair(n-2,som%som2));}}}
 for(long long int i(1);i<(dp.size());i++){
  if((dp[i].second+dp[i-1].second)<vect[dp[i].first]){
   dp[i].second+=dp[i-1].second;
   }
  else{
   som1++;
   dp[i].second-=(vect[dp[i].first]-dp[i-1].second);}
  }
 cout<<som1<<endl;
    }
 
 
 
 
return 0;}
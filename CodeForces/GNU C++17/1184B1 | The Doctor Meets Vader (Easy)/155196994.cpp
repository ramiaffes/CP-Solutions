#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int s,b,d,g;
 cin>>s>>b;
 vector<long long int>vect(s);
 for(long long int i(0);i<s;i++){
  cin>>vect[i];}
vector<long long int>vect1(b);
vector<long long int>vect2(b);
vector<pair<long long int,long long int>>vect3(b);
for(long long int i(0);i<b;i++){
 cin>>d>>g;
 vect3[i]=make_pair(d,g);}
sort(vect3.begin(),vect3.end());
for(long long int i(0);i<b;i++){
 vect1[i]=vect3[i].first;
 vect2[i]=vect3[i].second;}
 
vector<long long int >dp(b);
dp[0]=vect2[0];
for(long long int i(1);i<b;i++){
 dp[i]=dp[i-1];
 dp[i]+=vect2[i];}
for(long long int i(0);i<s;i++){
 auto it=upper_bound(vect1.begin(),vect1.end(),vect[i]);
long long int val=it-vect1.begin()-1;
if(val<0)cout<<0<<" ";
else
 cout<<dp[val]<<" ";}
 
 
 
 
 
return 0;}  
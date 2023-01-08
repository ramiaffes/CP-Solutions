#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main()
{
 fast;
long long int n,t,k;
cin>>t;
while(t--){
cin>>n>>k;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
for(long long int i(0);i<n;i++){
 vect[i]=vect[i]%k;}
map<long long int,long long int>hashing;
for(long long int i(0);i<n;i++){
 hashing[vect[i]]++;}
long long int ans=0;
for(auto v:hashing){
 if(v.first!=0){
 ans=max(ans,k-(v.first)+k*(v.second-1));}}
if(ans==0)cout<<0<<endl;
else cout<<(ans+1)<<endl;
}
 
 
 
   return 0;}
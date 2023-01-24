#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 set<long long int>se;
 map<long long int,long long int>vis;
 for(long long int i(0);i<n;i++){
  if(vect[i]==1)continue;
  long long int j=2;
  se.insert(vect[i]);
  vis[vect[i]]++;
  for(j=2;j*j<vect[i];j++){
   if(vect[i]%j==0){
    vis[j]++;
    vis[vect[i]/j]++;
    se.insert(j);
    se.insert(vect[i]/j);}}
  if((j*j)==vect[i]){se.insert(j);vis[j]++;}}
long long int ans=1;
for(auto v:se){
 ans=max(ans,vis[v]);}
cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
return 0;}
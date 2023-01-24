#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
long long int gcd(long long int a,long long int b){
 if((b==0))return a;
 return gcd(b,a%b);}
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 map<long long int,long long int>hashing;
 set<long long int>se;
 for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]=max(hashing[vect[i]],i+1);se.insert(vect[i]);}
 long long int ans=-1;
 for(auto v:se){
  for(auto v1:se){
   if(gcd(v,v1)==1){
    
    ans=max(ans,hashing[v]+hashing[v1]);}}}
cout<<ans<<endl;
 
}
 
 return 0;}
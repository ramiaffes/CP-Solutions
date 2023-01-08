#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=0;
int main()
{
 fast;
 
 long long int n,k,a,b;
 cin>>n;
 vector<long long int>vect(n);
 map<long long int,long long int>hashing;
 long long int ans=0;
 long long int val=0;
 for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;ans=max(ans,vect[i]);}
 vector<long long int>res;
 for(long long int i(1);i<=ans;i++){
  res.push_back(hashing[i]);val=max(val,hashing[i]);}
reverse(res.begin(),res.end());
if(not(is_sorted(res.begin(),res.end()))or(hashing[1]==0)){
 cout<<-1<<endl;}
else{
cout<<val<<endl;
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++){
  vect1[i]=hashing[vect[i]];
  hashing[vect[i]]--;}
for(auto v:vect1)cout<<v<<" ";
  
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
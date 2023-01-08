#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n;
 string s;
 string t;
 
 cin>>n;
 vector<long long int>vect(n);
 long long int ans=0;
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++){cin>>vect[i];}
  for(long long int i(0);i<n;i++){cin>>vect1[i];}
  map<long long int,long long int>pos1;
  map<long long int,long long int>vis;
  for(long long int i(0);i<n;i++){
   pos1[vect[i]]=i;}
 for(long long int i(0);i<n;i++){
  pos1[vect1[i]]-=i;}
for(long long int i(1);i<=n;i++){
 if(pos1[i]<0){pos1[i]+=n;}
 vis[pos1[i]]++;
 }
for(long long int i(1);i<=n;i++){
 ans=max(ans,vis[pos1[i]]);}
cout<<ans<<endl;
  
 
  
 
  
 
 
 
 
 
return 0;}
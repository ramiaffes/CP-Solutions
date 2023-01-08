#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,p,q,r;
 cin>>q;
 while(q--){
 cin>>n;
vector<long long int>vect(n);
map<long long int,long long int>hashing;
for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;}
map<long long int,set<long long int>>res;
for(long long int i(0);i<n;i++){
 res[hashing[vect[i]]].insert(vect[i]);}
long long int som=0;
for(long long int i(n);i>=1;i--){
 if(res[i].size()==0)continue;
 long long int val=*(max_element(res[i].begin(),res[i].end()));
 som+=(i);
 for(auto v:res[i]){
  if(v!=val){
   res[i-1].insert(v);}}}
cout<<som<<endl;
 
 
 
 
 
 
 
 }
 
 
 
  
 
  
 
 
 
 
 
return 0;}
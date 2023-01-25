#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
map<long long int, bool>vis;
map<long long int,vector<long long int>>adj;
 
int main()
{
fast;
long long int n,k,x,t;
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){
 cin>>vect[i];
 hashing[vect[i]]=i+1;}
long long int som=0;
for(long long int i(0);i<(n-1);i++){
 som+=abs(hashing[i+2]-hashing[i+1]);}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
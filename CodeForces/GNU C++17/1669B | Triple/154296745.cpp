#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,k,a,b,t;
 cin>>t;
 while(t--){
  cin>>n;
  bool test=false;
  vector<long long int>vect(n); map<long long int,long long int>hashing;
  for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;}
 
  for(long long int i(0);i<n;i++){
   if(hashing[vect[i]]>=3){test=true;cout<<vect[i]<<endl;break;}}
  if(test==false)cout<<-1<<endl;}
 
 
return 0;}  
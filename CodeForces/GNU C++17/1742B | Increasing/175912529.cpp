#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
 map<pair<long long int,long long int>,bool>vis;
 long long int som=0;
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  map<long long int,long long int>hashing;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;}
  bool test=true;
  for(auto v:hashing){
   if(hashing[v.first]>1)test=false;}
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
  }
 
 
  
  
 
 
 
 
 
 
    
return 0;} 
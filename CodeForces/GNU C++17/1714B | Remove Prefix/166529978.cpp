#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
 fast; 
 long long int n,t,h,m;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  map<long long int,long long int>hashing;
  long long int val=0;
  for(long long int i(0);i<n;i++){cin>>vect[i];}
  for(long long int i(n-1);i>=0;i--){
      hashing[vect[i]]++;
      if(hashing[vect[i]]>1){val=i+1;break;}
  }
  cout<<val<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
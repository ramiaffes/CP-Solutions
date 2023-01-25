#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,long long int>hashing;
int main()
{
 fast;
 long long int n,l,r,x,y,k;
 cin>>l>>r>>x>>y>>k;
 long long int val=max(l,k*x);
 long long int val2=min(k*y,r);
 bool test=false;
 for(long long int i(val);i<=val2;i++){
  if(i%k==0){test=true;break;}}
 if(test==false)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
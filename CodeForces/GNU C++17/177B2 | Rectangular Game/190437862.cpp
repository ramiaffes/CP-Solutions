#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
int main()
{
 fast;
 long long int n,m;
 cin>>n;
 long long int res=n;
 while(n!=1){
  long long int val=n;
  for(long long int i(2);i<=sqrt(n);i++){
   if(n%i==0){val=i;break;}}
   res+=(n/val);
  n/=val;}
 cout<<res<<endl;
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
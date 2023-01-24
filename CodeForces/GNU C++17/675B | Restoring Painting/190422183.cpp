#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int a,n,b,c,d;
 cin>>n>>a>>b>>c>>d;
 long long int som=0;
 for(long long int i(1);i<=n;i++){
  if(((i+a-d)>=1)and((i+a-d)<=n)and((i+a-d+b-c)<=n)and((i+a-d+b-c)>=1)and((i+b-c)>=1)and((i+b-c)<=n)){
   som+=n;}}
 cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
return 0;}
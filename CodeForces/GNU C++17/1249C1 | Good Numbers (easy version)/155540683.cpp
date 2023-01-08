#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int power(long long int m,long long int d){
 long long int p=1;
 for(long long int i(0);i<d;i++){
  p*=m;}
 return p;}
int main()
{
 fast;
 long long int q,n;
 cin>>q;
 for(long long int i(0);i<q;i++){
  cin>>n;
  long long int p=1;
  vector<long long int>res;
  while(p<=n){
   res.push_back(p);
   p*=3;}
 res.push_back(p);
 long long int tot=1<<res.size();
 long long int som=0;
 long long int ans=1e9;
 for(long long int mask=0;mask<tot;mask++){
  som=0;
  for(long long int i=0;i<res.size();i++){
   long long int f=1<<i;
   if(mask&f){
    som+=res[i];
    }
   }
   if(som>=n)ans=min(ans,som);}
 cout<<ans<<endl;
 
 }
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}  
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int l,n,r,x;
 cin>>n>>l>>r>>x;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int som=0;
 long long int res=0;
 long long int tot=1<<n;
 
 for(long long int mask=0;mask<tot;mask++){long long int ans=0;
 long long int ans2=1e6;
 som=0;
  for(long long int i=0;i<n;i++){
   long long int f=1<<i;
   if(mask&f){
    som+=vect[i];
    ans=max(ans,vect[i]);
    ans2=min(ans2,vect[i]);
    }}
   if((som<=r)and(som>=l) and((ans-ans2)>=x)){
    res++;}
   }
  cout<<res<<endl;
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
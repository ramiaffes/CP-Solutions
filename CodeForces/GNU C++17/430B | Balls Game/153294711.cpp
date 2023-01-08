#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 long long int n,k,x;
 cin>>n>>k>>x;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int som=1;
 vector<long long int>res;
 for(long long int i(0);i<(n-1);i++){
  if(vect[i]==vect[i+1]){
   som++;}
  else{
   res.push_back(som);
   som=1;}}
res.push_back(som);
long long int ans=0;
auto it =unique(vect.begin(),vect.end());
vect.resize( distance(vect.begin(),it) );
for(long long int i(0);i<vect.size();i++){
 if((vect[i]!=x)or(res[i]==1))continue;
 long long int d=i+1;
 long long int j=i-1;
 long long int som2=2;
 while((j>=0)and(d<vect.size())){
  if(((res[j]+res[d])<3)or(vect[j]!=vect[d]))break;
  som2+=(res[j]+res[d]);
  j--;
  d++;}
ans=max(ans,som2);}
cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
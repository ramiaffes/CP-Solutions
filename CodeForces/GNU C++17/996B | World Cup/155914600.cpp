#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
 
int main()
{
 fast;
long long int n,m,k,u,v,l;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int val=0;
 long long int res=0;
 for(long long int i(0);i<n;i++){
  vect[i]-=val;
  if(vect[i]<=0){res=i+1;break;}
  val++;}
if(res==0){
long long int ans=1e9;
for(long long int i(0);i<n;i++){
 ans=min(ans,vect[i]/n+(vect[i]%n!=0));
 }
for(long long int i(0);i<n;i++){
 if(ans==(vect[i]/n+(vect[i]%n!=0))){res=i+1;break;}}
 
 
 
 
 
 
}cout<<res<<endl;
 
 
 
return 0;}  
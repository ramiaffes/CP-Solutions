#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>dp;
long long int som=0;
int main() 
{
 fast;
 long long int n,t;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 cin>>t;
 sort(vect.begin(),vect.end());
 long long int ans=0;
 for(long long int i(0);i<n;i++){
  auto it=upper_bound(vect.begin(),vect.end(),vect[i]+t);
  long long int val=it-vect.begin();
  ans=max(ans,val-i);}
 cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
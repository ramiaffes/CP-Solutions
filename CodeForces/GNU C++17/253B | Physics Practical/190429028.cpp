#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int n,m,d;
 freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
 cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
sort(vect.begin(),vect.end());
vector<long long int>vect1(vect.begin(),vect.end());
for(long long int i(0);i<n;i++){
 vect1[i]*=2;}
long long int ans=1e9;
for(long long int i(0);i<n;i++){
 auto it=upper_bound(vect.begin(),vect.end(),vect1[i]);
 ans=min(ans,((n-(it-vect.begin())+i)));}
 
 
 cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
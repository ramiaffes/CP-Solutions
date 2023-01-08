#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main()
{
 fast;
long long int n,t,m;
cin>>t;
string s;
while(t--){
 cin>>n>>m;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int ans=1e9;
 for(long long int i(0);i<(n-1);i++){
  for(long long int j(i+1);j<n;j++){
   long long int val1=0;
   for(long long int d(0);d<m;d++){
    long long int val=abs(vect[i][d]-vect[j][d]);
    val1+=val;
    }ans=min(ans,val1);}}
 cout<<ans<<endl;
}
  return 0;}
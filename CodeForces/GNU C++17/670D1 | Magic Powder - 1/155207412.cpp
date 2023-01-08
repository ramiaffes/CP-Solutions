#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,k;
 cin>>n>>k;
 vector<long long int>vect(n);
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
for(long long int i(0);i<n;i++){
  cin>>vect1[i];}
long long int ans=0;
for(long long int i(0);i<n;i++){
 ans=max(ans,(vect1[i]+k)/vect[i]);}
long long int som=0;
long long int var=0;
for(long long int i(ans);i>=0;i--){
 som=0;
 for(long long int j(0);j<n;j++){
  som+=(max(i*vect[j]-vect1[j],var));
  if(som>k)break;}
 if(som<=k){cout<<i<<endl;break;}}
 
 
 
 
 
 
 
 
 
return 0;}  
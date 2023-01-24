#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 long long power(long long x,long long y)
{
    long long ans=1;
    while (y){
        if (y&1) ans=ans*x;
        x=x*x;
        y=y>>1;
    }
    return ans;
}
int main()
{
 fast;
 long long int m,n;
 cin>>n>>m;
 vector<char>vect1(m);
 vector<vector<char>>vect(n,vect1);
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   cin>>vect[i][j];}}
vector<long long int>res1(n);
vector<long long int>res2(m);
for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   if(vect[i][j]=='*'){
    res1[i]++;}}}
for(long long int j(0);j<m;j++){
 for(long long int i(0);i<n;i++){
  if(vect[i][j]=='*'){
   res2[j]++;}}}
long long int som=0;
for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   if(vect[i][j]=='*'){
    som+=(res2[j]-1)*(res1[i]-1);}}}
 
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
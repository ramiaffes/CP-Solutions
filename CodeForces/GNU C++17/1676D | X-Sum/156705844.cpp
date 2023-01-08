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
 vector<long long int>vect1(m);
 vector<vector<long long int>>vect(n,vect1);
 long long int som=0;
 long long int ans=0;
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   cin>>vect[i][j];}}
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   long long int j1=j;
   long long int i1=i;
   while((i1>=0)and(j1>=0)){
    som+=vect[i1][j1];
    i1--;
    j1--;}
   j1=j;
   i1=i;
   while((i1>=0)and(j1<m)){
    som+=vect[i1][j1];
    i1--;
    j1++;}
   j1=j;
   i1=i;
   while((j1>=0)and(i1<n)){
    som+=vect[i1][j1];
    i1++;
    j1--;}
   j1=j;
   i1=i;
    while((j1<m)and(i1<n)){
    som+=vect[i1][j1];
    i1++;
    j1++;}
   som-=(3*vect[i][j]);
   ans=max(ans,som);
   som=0;
   
   }}
  cout<<ans<<endl;
 
}
  return 0;}
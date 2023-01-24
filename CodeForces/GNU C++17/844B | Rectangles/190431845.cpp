#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
int main()
{
 fast;
 long long int t,k, n,m;
 string s;
 cin>>n>>m;
 vector<long long int>vect1(m);
 vector<vector<long long int>>vect(n,vect1);
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   cin>>vect[i][j];}}
long long int p1=1;
long long int p2=1;
long long  int som=0;
 for(long long int i(0);i<n;i++){
  p1=1;
  p2=1;
  for(long long int j(0);j<m;j++){
   if(vect[i][j]==0){
    p1*=2;}
  else{
   p2*=2;}}
  som+=(p1+p2-2);}
 for(long long int j(0);j<m;j++) {
  p1=1;
  p2=1;
  for(long long int i(0);i<n;i++){
   if(vect[i][j]==0){
    p1*=2;}
  else{
   p2*=2;}}
  som+=(p1+p2-2);}
 cout<<(som-n*m)<<endl;
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
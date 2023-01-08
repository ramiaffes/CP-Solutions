#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
 fast; 
 long long int n,m,l,r,x;
 string s;
 cin>>n>>m;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 for(long long int i(0);i<m;i++){
  cin>>l>>r>>x;
  l--;
  r--;
  x--;
  long long int som1=0;
  long long int som2=0;
  for(long long int j(l);j<x;j++){
   if(vect[j]>vect[x]){
    som1++;}}
   for(long long int j(x+1);j<=r;j++){
   if(vect[j]<vect[x]){
    som2++;}}
   
   
   if(som1!=som2)cout<<"No"<<endl;
   else cout<<"Yes"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
long long int power(long long int n,long long int f){
 long long int p=1;
 for(long long int i=0;i<f;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 int n,x,t;
 cin>>t;
 while(t--){
  cin>>n;
  map<long long int,bool>vis;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  long long int val=n;
  long long int som=0;
  for(long long int i(n-1);i>=0;i--){
   if(vect[i]!=val){
    vis[vect[i]]=1;
   }
  else if(vect[i]==val){
      
   vis[val]=1;
   if(val==n)
   som++;
   while((val>=1)and(vis[val]==1)){
    val--;}
    if(val!=0){
    if(vis.size()==(n-val+1))som++;}
   if(val==0)break;}
  
 }
cout<<som<<endl;}
    
return 0;} 
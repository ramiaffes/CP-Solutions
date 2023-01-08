#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=50;
 
int main()
{
 fast; 
 string s;
 long long int x,n,t,k,val;
 cin>>t;
 map<long long int,vector<long long int>>adj;
 while(t--){
  cin>>n;
  map<long long int,bool>vis;
  map<long long int,bool>vis1;
  for(long long int i(0);i<n;i++){
   cin>>k;
   for(long long int j(0);j<k;j++){
    cin>>val;
    if((vis1[i]==0)and(vis[val-1]==0)){vis1[i]=1;vis[val-1]=1;}
    }}
  bool test=false;
  long long int val1=0;
  for(long long int i(0);i<n;i++){
   if(vis1[i]==0){val1=i;test=true;break;}}
  if(test==false){
   cout<<"OPTIMAL"<<endl;}
  else{
   cout<<"IMPROVE"<<endl;
   long long int val2=0;
   for(long long int i(0);i<n;i++){
    if(vis[i]==0){
     val2=i;break;}}
   cout<<(val1+1)<<" "<<(val2+1)<<endl;
   }
  }
 
 
 
 
 
return 0;}
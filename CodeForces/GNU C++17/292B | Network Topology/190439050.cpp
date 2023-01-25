#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
map<long long int,vector<long long int>> adj; 
int main()
{
 fast;
 long long int m,n,x,y;
 cin>>n>>m;
 for(long long int i(0);i<m;i++){
  cin>>x>>y;
  adj[x].push_back(y);
  adj[y].push_back(x);}
 long long int som1=0;
 long long int som2=0;
 long long int som3=0;
 for(long long int i(0);i<n;i++){
  if(adj[i+1].size()==1)som1++;
  if(adj[i+1].size()==2)som2++;
  }
 if((som1==n-1)){
  cout<<"star topology"<<endl;}
 else if((som1==2)and(som2==n-2)){
  cout<<"bus topology"<<endl;}
 else if(som2==n){
  cout<<"ring topology"<<endl;}
 else{
  cout<<"unknown topology"<<endl;}
  
  
 
 
 
  
 
 
 
 
 
return 0;}
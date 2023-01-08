#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
	fast;	
	long long int n,p,q,r;
	cin>>n>>p>>q>>r;
  vector<long long int>vect(n);
  for(long long int i(0);i<(n);i++){
  cin>>vect[i];}
  map<long long int,bool>vis;
  vector<long long int>res;
  vis[0]=1;
  long long int som=0;
  for(long long int i(0);i<n;i++){
  som+=vect[i];
   vis[som]=1;
  res.push_back(som);}
  bool test=false;
  for(long long int i(0);i<res.size();i++){
  if((vis[res[i]-r]==1)and(vis[res[i]-r-q]==1)and(vis[res[i]-r-q-p]==1)){
    test=true;
  }}
  if(test==false){
  cout<<"No"<<endl;}
  else{
  cout<<"Yes"<<endl;}
  
	
		
	
	
	
    
    
return 0;}
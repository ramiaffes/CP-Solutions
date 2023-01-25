#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map< int ,int>parent;
 
int main()
{
 fast; 
  int t,n;
 cin>>t;
 while(t--){
 cin>>n;
 vector< int>vect(n);
 for( int i(0);i<n;i++){
  cin>>vect[i];
  parent[vect[i]]=(i+1);}
 vector<int>result(n);
 for(int i(0);i<n;i++){
  int v=parent[i+1];
  result[i]=1;
  while(v!=(i+1)){
   result[i]++;
   v=parent[v];
   }}
  for(int i(0);i<n;i++){
   cout<<result[i]<<" ";}
  cout<<endl;
  parent.clear();
 
 
 }
 
 
  
  
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
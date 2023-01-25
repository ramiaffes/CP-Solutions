#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 string s;
 while(t--){
  cin>>n;
 
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  vector<long long int>visited(n,0);
  long long int max1=0;
  long long int som=0;
  for(long long int j(0);j<n;j++){
   som=0;
   long long int i=j;
  while( (i<n)and(visited[i]==0)){
   visited[i]=1;
   som+=vect[i];
   i+=vect[i];
   }
  if(max1<som){
   max1=som;}}
  cout<<max1<<endl;
  
  
  
  
  
  
}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}
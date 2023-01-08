#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
string s;
int n;
cin>>n;
vector< int>vect(n);
int som=n;
vector<long long int>res;
map< int, int>vis;
for(int i(0);i<n;i++)cin>>vect[i];
for(int i=0;i<n;i++){
 vis[vect[i]]=1;
 if(vect[i]==som){
  while(vis[som]==1){
   cout<<som<<" ";
   vis[som]++;
   som--;}
  cout<<endl;
  }
 else{
  cout<<endl;
  continue;
  }}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
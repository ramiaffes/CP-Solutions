#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<string,vector<string>> adj; 
map<long long int,long long int> parent;
map<long long int,long long int> hashage;
 long long int som=0;
 
int main()
{
 fast;
   long long int n,m;
   string a,b;
   cin>>n;
   cin>>m;
   vector<string>vect(n);
   for(long long int i(0);i<n;i++)cin>>vect[i];
   for(long long int i(0);i<m;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);}
  int tot=1<<n;
 vector<vector<string>> myarray1;
 for(int mask=0;mask<tot;mask++){
  som=0; 
  vector<string>myarray;
  for(int i=0;i<n;i++){
   int f=1<<i;
   if(mask&f){
    myarray.push_back(vect[i]);
    }
  
   }
   bool test=true;
   for(long long int i(0);i<myarray.size();i++){
    for(long long int j(0);j<myarray.size();j++){
     if(find(adj[myarray[j]].begin(),adj[myarray[j]].end(),myarray[i])!=adj[myarray[j]].end()){
      test=false;break;}}
    }
   if(test==true)myarray1.push_back(myarray);}
   long long int  ans=0;
  for(long long int i(0);i<myarray1.size();i++){
   long long int val=myarray1[i].size();
   ans=max(ans,val);}
  cout<<ans<<endl;
  for(long long int i(0);i<myarray1.size();i++){
   if(myarray1[i].size()==ans){
    sort(myarray1[i].begin(),myarray1[i].end());
    for(long long int j(0);j<myarray1[i].size();j++){
     cout<<myarray1[i][j]<<endl;}break;}}
   
 
 
  
 
 
 
 
return 0;}
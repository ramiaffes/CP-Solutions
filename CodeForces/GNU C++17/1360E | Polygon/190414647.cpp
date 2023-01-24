#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=50;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 string s;
 long long int n,b,a,t,k;
    cin>>t;
    while(t--){
  cin>>n;
  vector<string>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
for(long long int i(0);i<n;i++){
   for(long long int j(0);j<n;j++){
    if(i<(n-1)){
    if((vect[i][j]=='1')and(vect[i+1][j]=='1')){
    adj[make_pair(i,j)].push_back(make_pair(i+1 ,j));}
    }
   if(j<(n-1)){
    if((vect[i][j]=='1')and(vect[i][j+1]=='1')){
     adj[make_pair(i,j)].push_back(make_pair(i,j+1));}}}}bool test=true;
  for(long long int i(0);i<n;i++){
   for(long long int j(0);j<n;j++){
    if((i<(n-1)and(j<(n-1)))and(vect[i][j]=='1')and(adj[make_pair(i,j)].size()==0)){test=false;break;}}}
   if(test==false)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
 adj.clear();
  }
 
 
 
 
return 0;}
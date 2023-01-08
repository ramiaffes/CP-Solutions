#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
map<pair<long long int,long long int>,bool>vis1;
long long int som=0;map<pair<long long int,long long int>,long long int>m1;
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,q,t;
    cin>>n>>q;
    long long int d=0;
    long long int x=0;
    vector<long long int>vect(n);
    long long int som=0;
    for(long long int i(0);i<n;i++){
  cin>>vect[i];
  som+=vect[i];}
 map<long long int,bool>vis;
 long long int val=0;
 for(long long int i(0);i<q;i++){
  cin>>t;
  if(t==1){
   cin>>d>>x;
   if(val!=0){
    if(vis[d]==1){
     som-=(vect[d-1]-x);}
    else {som-=(val-x);}}
   else{
   som-=(vect[d-1]-x);}
   cout<<(som)<<endl;
   vis[d]=1;
   vect[d-1]=x;}
  else {cin>>x;som=n*x;cout<<(som)<<endl;val=x;vis.clear();}}
    
 
 
    
return 0;} 
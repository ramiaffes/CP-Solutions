#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e4;
long long int ans1=1e4;vector<long long int>vect(N);
map<long long int,set<long long int>>adj;
map<pair<long long int,long long int>,long long int>mymap;
bool test=true;
long long int cost=0;
long long int cost1=1e7;
map<long long int,bool>vis;
map<pair<long long int,long long int>,bool>vis1;
int main()
{
 fast;
 long long int n,m,x,y,c;
 cin>>n;
 vect.resize(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 cin>>m;
 long long int cost=0;
 long long int cost1=1e7;
 for(long long int i(0);i<m;i++){
  cin>>x>>y>>c;
  adj[y].insert(x);
  if(vis1[make_pair(y,x)]==0){mymap[make_pair(y,x)]=1e7;}
  vis1[make_pair(y,x)]=1;
  mymap[make_pair(y,x)]=min(mymap[make_pair(y,x)],c);}
  long long int som=0;
 for(long long int i(0);i<n;i++){
  long long int u=i+1;
  cost1=1e7;
  for(auto v:adj[u]){     
   if(vect[u-1]<vect[v-1]){
   cost1=min(cost1,mymap[make_pair(u,v)]);
   }}
  if(cost1==1e7){som++;}
  if(som==2){test=false;break;}
  if(cost1!=1e7){
  cost+=cost1;}
  }
 if(test==false)cout<<-1<<endl;
 else cout<<cost<<endl;
return 0;}
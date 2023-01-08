#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 long long int n,m;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>vect2(n);
 map<long long int,set<pair<long long int,long long int>>>res;
  map<long long int,vector<pair<long long int,long long int>>>res2;
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<n;i++){cin>>vect1[i];res[vect1[i]].insert(make_pair(vect[i],i));}
 for(long long int i(0);i<n;i++){cin>>vect2[i];res[vect2[i]].insert(make_pair(vect[i],i));}
 cin>>m;
 vector<long long int>vect3(m);
 for(long long int i(0);i<m;i++)cin>>vect3[i];
 for(auto v:res){
  vector<pair<long long int,long long int>>vect10(res[v.first].begin(),res[v.first].end());
  res2[v.first]=vect10;}
map<long long int,long long int>index;
map<pair<long long int,long long int>,bool>vis;
for(long long int i(0);i<m;i++){
  while((res2[vect3[i]].size()>index[vect3[i]])and(vis[res2[vect3[i]][index[vect3[i]]]]==1)){
   index[vect3[i]]++;
   }
  
    if(index[vect3[i]]>=res2[vect3[i]].size()){cout<<-1<<" ";}
    else{vis[res2[vect3[i]][index[vect3[i]]]]=1;
     cout<<res2[vect3[i]][index[vect3[i]]].first<<" ";}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
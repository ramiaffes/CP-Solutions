#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
int main()
{
 fast;
 long long int q,n;
 cin>>n;
 vector<pair<long long int,long long int>>vect(n);
 set<long long int>se;
 for(long long int i(0);i<n;i++){cin>>vect[i].first;cin>>vect[i].second;se.insert(vect[i].first);se.insert(vect[i].second);}
 map<long long int ,long long int>vis1;
 map<long long int,long long int>vis2;
 for(long long int i(0);i<n;i++){
  vis1[vect[i].first]++;
  if(vect[i].first!=vect[i].second){
   vis2[vect[i].second]++;}}
 long long int ans=1e9;
 for(auto v:se){
  if(vis1[v]>=(n/2+(n%2==1))){ans=0;break;}
  else if((vis2[v])>=((n/2+(n%2==1))-vis1[v])){
   ans=min(ans,(n/2+(n%2==1))-vis1[v]);
   }
  else{continue;}}
 if(ans==1e9)cout<<-1<<endl;
 else cout<<ans<<endl;
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
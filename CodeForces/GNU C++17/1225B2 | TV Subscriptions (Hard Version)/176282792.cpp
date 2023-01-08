#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
 map<pair<long long int,long long int>,bool>vis;
 long long int som=0;
int main()
{
 fast; 
 long long int t,n,k,d;
 cin>>t;
 while(t--){
  cin>>n>>k>>d;
  vector<long long int>vect(n);
  map<long long int,long long int>hashing;
  map<long long int,long long int>hashing1;
  map<long long int,bool>vis;
  set<long long int>se;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  long long int ans=1e9;
  for(int i=0;i<d;i++){
   se.insert(vect[i]);
   if(vis[vect[i]]==1)
   hashing1[hashing[vect[i]]]--;
   hashing[vect[i]]++;
   vis[vect[i]]=1;
   hashing1[hashing[vect[i]]]++;}
  for(long long int i(0);i<(n);i++){
   long long int val=se.size()-hashing1[0];
   ans=min(ans,val);
   hashing1[hashing[vect[i]]]--;
   hashing[vect[i]]--;
   hashing1[hashing[vect[i]]]++;
   if((i+d)<n){
   if(vis[vect[i+d]]==1)
   hashing1[hashing[vect[i+d]]]--;
   hashing[vect[i+d]]++;
   se.insert(vect[i+d]);
   vis[vect[i+d]]=1;
   hashing1[hashing[vect[i+d]]]++;
   }
   else break;
   
   
   }
  cout<<ans<<endl;
  }
 
 
  
  
 
 
 
 
 
 
    
return 0;} 
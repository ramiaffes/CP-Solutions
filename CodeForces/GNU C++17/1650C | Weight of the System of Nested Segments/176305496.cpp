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
 long long int t,n,m,x,w;
cin>>t;
while(t--){
  cin>>n>>m;
  map<long long int,long long int>hashing;
  map<long long int,long long int>hashing2;
  vector<pair<long long int,long long int>>res;
  for(long long int i(0);i<m;i++){
   cin>>x>>w;
   hashing2[x]=i+1;
   res.push_back(make_pair(w,x));}
  sort(res.begin(),res.end());
  long long int som=0;
  vector<long long int>res2;
  for(long long int i(0);i<(2*n);i++){
   res2.push_back(res[i].second);
   som+=res[i].first;}
  cout<<som<<endl;
  long long int i=0;
  long long int j=res2.size()-1;
  sort(res2.begin(),res2.end());
  while(i<j){
   cout<<hashing2[res2[i]]<<" "<<hashing2[res2[j]]<<endl;
   j--;
   i++;}
  
  }
 
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 
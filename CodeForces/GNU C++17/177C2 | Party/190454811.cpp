#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int> parent;
map<long long int,long long int> hashage;
 
void make_set(long long int  v) {
    parent[v] = v;
}
 
long long int find_set(long long int v) {
    if (v == parent[v])
        return v;
    return(find_set(parent[v]));
}
 
void union_sets(long long int a, long long int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b){
        parent[b] = a;
    hashage[a]+=hashage[b];
    }
}
int main()
{
 fast; 
 long long int n,k1,k2,u,v;
 cin>>n;
 cin>>k1;
 vector<long long int>res;
 for(long long int i(0);i<n;i++){
  make_set(i+1);
  hashage[i+1]=1;}
 for(long long int i(0);i<k1;i++){
  cin>>u>>v;
  union_sets(u,v);}
 cin>>k2;
 for(long long int i(0);i<k2;i++){
  cin>>u>>v;
  if(find_set(u)==find_set(v)){
   res.push_back(find_set(u));}}
 long long int ans=0;
 for(long long int i(0);i<n;i++){
  if((parent[i+1]==i+1)and(find(res.begin(),res.end(),i+1)==res.end())){
   ans=max(ans,hashage[i+1]);
   }}
 cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
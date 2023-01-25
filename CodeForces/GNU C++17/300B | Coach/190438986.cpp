#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,long long int> parent; 
map<long long int,long long int> hashing; 
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
        hashing[a]+=hashing[b];
    }
}
int main()
{
 fast;
 long long int n,m,a,b;
 cin>>n>>m;
 for(long long int i(0);i<n;i++){
  make_set(i+1);
  hashing[i+1]=1;}
 for(long long int i(0);i<m;i++){
  cin>>a>>b;
  union_sets(a,b);}
 bool test=true;
 for(long long int i(0);i<n;i++){
  if(parent[i+1]==i+1){
   if(hashing[i+1]>3){test=false;break;}}}
 if(test==false)cout<<-1<<endl;
 else {
  set<long long int>res;
  vector<long long int>res1;
  vector<long long int>res2;
  vector<long long int>res3;
  for(long long int i(0);i<n;i++){
   if(parent[i+1]==i+1)res.insert(i+1);}
  for(auto it=res.begin();it!=res.end();it++){
   if(hashing[*it]==1)res1.push_back(*it);
   if(hashing[*it]==2)res2.push_back(*it);
   if(hashing[*it]==3)res3.push_back(*it);
   }
   long long int som1=res1.size();
   long long int som2=res2.size();
  if(som2>som1)cout<<-1<<endl;
  else if((som1-som2)%3!=0)cout<<-1<<endl;
  else{
   for(long long int i(0);i<res2.size();i++){
    union_sets(res1[i],res2[i]);}
   for(long long int i(res2.size());i<((res1.size()-res2.size())/3+res2.size());i++){
      union_sets(res1[i],res1[i+(res1.size()-res2.size())/3]);
      union_sets(res1[i],res1[i+2*(res1.size()-res2.size())/3]);}
   res.clear();
   for(auto it=res1.begin();it!=res1.end();it++){
    res.insert(find_set(*it));}
   for(auto it=res2.begin();it!=res2.end();it++){res.insert(find_set(*it));}
   for(auto it=res3.begin();it!=res3.end();it++){res.insert(find_set(*it));}
   for(auto it=res.begin();it!=res.end();it++){
   for(long long int i(0);i<n;i++){
    if(find_set(i+1)==*it)cout<<i+1<<" ";}
   cout<<endl;}
   }
  
  
  }
 
 
  
 
 
 
 
 
return 0;}
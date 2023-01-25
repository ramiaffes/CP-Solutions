#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int> parent1;
map<long long int,long long int> parent2;
 
void make_set1(long long int  v) {
    parent1[v] = v;
}
 void make_set2(long long int  v) {
    parent2[v] = v;
}
long long int find_set1(long long int v) {
    if (v == parent1[v])
        return v;
    return(find_set1(parent1[v]));
}
 long long int find_set2(long long int v) {
    if (v == parent2[v])
        return v;
    return(find_set2(parent2[v]));
}
void union_sets1(long long int a, long long int b) {
    a = find_set1(a);
    b = find_set1(b);
    if (a != b){
        parent1[b] = a;
    }
}
void union_sets2(long long int a, long long int b) {
    a = find_set2(a);
    b = find_set2(b);
    if (a != b){
        parent2[b] = a;
    }
}
int main()
{
 fast;
 long long int n,m1,m2,u,v;
 cin>>n>>m1>>m2;
 for(long long int i(0);i<n;i++){
  make_set1(i+1);
  make_set2(i+1);
  }
 for(long long int i(0);i<(m1);i++){
  cin>>u>>v;
  union_sets1(u,v);
  } 
 for(long long int i(0);i<(m2);i++){
  cin>>u>>v;
  union_sets2(u,v);
  }
 vector<pair<long long int,long long int>>res1;
 long long int som=0;
 for(long long int i(0);i<(n-1);i++){
  for(long long int j(i+1);j<n;j++){
   if((find_set2(i+1)!=find_set2(j+1))and(find_set1(i+1)!=find_set1(j+1))){
    som++;
    res1.push_back(make_pair(i+1,j+1));
    union_sets2(i+1,j+1);
    union_sets1(i+1,j+1);}
   }}
 cout<<som<<endl;
 for(auto v:res1){
  cout<<v.first<<" "<<v.second<<endl;}
 
 
 
  
 
 
 
 
 
return 0;}
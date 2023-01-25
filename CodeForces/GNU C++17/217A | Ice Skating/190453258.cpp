#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<pair<long long int,long long int>,pair<long long int,long long int>> parent;
void make_set(pair<long long int,long long int>  v) {
    parent[v] = v;
}
 
pair<long long int,long long int> find_set(pair<long long int,long long int> v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}
 
void union_sets(pair<long long int,long long int> a, pair<long long int,long long int>  b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect1(n);
 vector<long long int>vect(n);
 vector<pair<long long int,long long int >>myvec(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i]>>vect1[i];
  myvec[i]=make_pair(vect[i],vect1[i]);
  make_set(myvec[i]);
  }
  for(long long int i(0);i<(n);i++){
    for(long long int j(0);j<n;j++){
     if(((vect[i]==vect[j])or(vect1[i]==vect1[j]))){
      union_sets(myvec[i],myvec[j]);
      }
     }}
  set<pair<long long int,long long int>>se;
  for(long long int i(0);i<(n);i++){
   se.insert(find_set(myvec[i]));
   }
  cout<<(se.size()-1)<<endl;
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
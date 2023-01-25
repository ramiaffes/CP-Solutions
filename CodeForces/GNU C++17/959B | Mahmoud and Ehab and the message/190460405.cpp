#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<string ,string>parent;
map<string,long long int>hashage;
void make_set(string  v) {
    parent[v] = v;
}
 
string find_set(string v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}
 
void union_sets(string a, string  b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
  
int main()
{
 fast; 
 long long int n,k,m;
 cin>>n>>k>>m;
 vector<string>vect(n);
 vector<long long int>vect1(n);
 vector<long long int>x(k);
 vector<string>vec(m);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 for(long long int i(0);i<n;i++){
  cin>>vect1[i];}
 for(long long int j(0);j<k;j++){
  cin>>x[j];
  vector<long long int>vec1(x[j]);
  for(long long int i(0);i<x[j];i++){
   cin>>vec1[i];
   make_set(vect[vec1[i]-1]);}
  for(long long int i(0);i<(x[j]-1);i++){
   union_sets(vect[vec1[i]-1],vect[vec1[i+1]-1]);}}
 for(long long int i(0);i<m;i++){
  cin>>vec[i];}
 for(long long int i(0);i<(n);i++){
  hashage[vect[i]]=vect1[i];}
 for(long long int i(0);i<(n);i++){
  if(hashage[parent[vect[i]]]>hashage[vect[i]]){
   hashage[parent[vect[i]]]=hashage[vect[i]];}
    
   }
long long int som=0;
for(long long int i(0);i<m;i++){
 som+=hashage[parent[vec[i]]];}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
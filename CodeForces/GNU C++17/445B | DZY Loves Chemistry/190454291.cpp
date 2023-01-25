#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
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
    }
}
 
int main()
{
 fast; 
 long long int n,m,x,y;
 cin>>n>>m;
 vector<long long int>vect;
for(long long int i(1);i<=n;i++){
  make_set(i);}
 for(long long int i(0);i<m;i++){
  cin>>x>>y;
  union_sets(x,y);}
long long int som=1;
for(long long int i(1);i<=n;i++){
 long long int val=find_set(i);
 if(find(vect.begin(),vect.end(),val)!=vect.end()){
  som*=2;}
 else{
  vect.push_back(val);
  }}
cout<<som<<endl; 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
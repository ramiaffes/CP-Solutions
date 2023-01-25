#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int> parent;
long long int power(long long int a,long long int b){
 long long int res=1;
 for(long long int i(0);i<b;i++)
{
  res*=a;
  res=res%1000000007;}
 return res;}
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
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  vector<long long int>vect1(n);
  set<long long int>se;
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   make_set(vect[i]);
   }
  for(long long int i(0);i<n;i++){
   cin>>vect1[i];}
  for(long long int i(0);i<n;i++)
  {union_sets(vect1[i],vect[i]);}
  long long int cnt=0;
for(long long int i(0);i<n;i++){
 if(parent[i+1]==i+1)cnt++;}
cout<<power(2,cnt)<<endl;
 
 }
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
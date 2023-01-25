#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,vector<long long int>>adj;
const long long int N=100;
map<long long int,long long int> parent;
 
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
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>res(n);
for(long long int i(0);i<(n);i++){
  cin>>res[i];}
 for(long long int i(0);i<(n);i++){
  cin>>vect[i];
  make_set(i+1);}
for(long long int i(0);i<(n);i++){
 for(long long int j(0);j<(n);j++){
  if(abs(i-j)==vect[i]){union_sets(i+1,j+1);}}
 }
bool test=true;
for(long long int i(0);i<(n);i++){
 if(find_set(i+1)!=find_set(res[i])){
   test=false;break;}}
 if(test==true)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
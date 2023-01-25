#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
bool test=false;
long long int val=0;
map<long long int,vector<long long int>> adj; 
map<long long int,long long int> parent;
map<long long int,long long int> hashage;
 long long int som=0;
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
    else{som++;}
}
int main()
{
 fast;
 long long int n,m,a,b;
 cin>>n>>m;
for(long long int i(0);i<n;i++){
  make_set(i+1);
  }
 for(long long int i(0);i<(m);i++){
  cin>>a>>b;
  union_sets(a,b);}
 long long int som2=0;
 for(long long int i(0);i<n;i++){
  if(parent[i+1]==i+1)som2++;}
 if(som2!=1)cout<<"NO"<<endl;
 else{
 if(som!=1)cout<<"NO"<<endl;
 else cout<<"FHTAGN!" <<endl;}
 
 
 
 
 
  
 
 
 
 
 
return 0;}
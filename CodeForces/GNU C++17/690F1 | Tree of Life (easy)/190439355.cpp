#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int val=0;
map<long long int,vector<long long int>> adj; 
map<long long int,long long int> parent;
bool test=true;
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
    else{test=false;}
}
 
int main()
{
 fast;
    long long int n,m,a,b;
 cin>>n;
 for(long long int i(0);i<(n-1);i++){
  cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);}
 long long int som=0;
 for(long long int i(0);i<n;i++){
  som+=adj[i+1].size()*(adj[i+1].size()-1)/2;}
 cout<<som<<endl;
 
 
  
 
 
 
 
 
return 0;}
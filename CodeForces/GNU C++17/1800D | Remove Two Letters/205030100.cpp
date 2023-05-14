#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int som=0; map<int,bool>vis;
map<int,vector<int>>adj;
void dfs(int u){
    if(vis[u]==1)return;
    vis[u]=1;
    
    for(auto v:adj[u])dfs(v);
}
int main()
{
 fast; 
  int n,k,t;
    cin>>t;
    string s;
   
    while(t--){
        cin>>n;  som=0;
        cin>>s;
       vis.clear();
       adj.clear();
        for(int i=0;i<(s.length()-2);i++){
            if(s[i]==s[i+2]){
                adj[i].push_back(i+1);
            }
        }
    for(int i=0;i<s.length();i++){
       if(vis[i]==0){som++;dfs(i);}
    }
    cout<<(som-1)<<endl;
    
    }
    
 
 
 
 
    
 
    
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}
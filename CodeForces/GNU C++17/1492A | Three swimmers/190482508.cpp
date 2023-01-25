#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj(N);
bool vis[N];
void dfs(long long int u){
 if(vis[u])return ;
 vis[u]=1;
 dfs(adj[u]);}
int main()
{
 fast; 
  long long int n,p,t,a,b,c;
   cin>>t;
   while(t--){
 cin>>p>>a>> b>>c;
 long long int som1,som2,som3;
 som1=(p/a)*a;
 som2=(p/b)*b;
 som3=(p/c)*c;
 if(p%a!=0)som1+=a;
 if(p%b!=0)som2+=b;
 if(p%c!=0)som3+=c;
 cout<<(min(som1,min(som2,som3))-p)<<endl;
 
  }
 
 
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,vector<long long int>>adj;
map<long long int,long long int>hashage;
map<long long int,long long int>hashage1;
map<long long int ,bool>vis;
vector<long long int>res;
vector<long long int>res1;
map<long long int,long long int>tin;
map<long long int,long long int>tout;
long long int timer=0;
long long int som=0;
void dfs(long long int u){
	if(vis[u]==1)return;
	vis[u]=1;
	res.push_back(u);
	tin[u]=timer++;
	if(adj[u].empty())return;
	for(auto v:adj[u]){
		if((vis[v]))continue;
		dfs(v);
		}
		tout[u]=timer++;}
bool isancestor(long long int u,long long int v){
	return (tin[u]<=tin[v]) and (tout[u]>=tout[v]);}
int main()
{
	fast;	
	string s;
	long long int x,y,z;
	cin>>x>>y>>z;
	 if((x>0)and(y<0)){
		cout<<x<<endl;}
	else if((y>0)and(x<0)){
		cout<<(-x)<<endl;}
	else {
		if((x>0)and(y<x)){
			if((z<y)and(z>0)){
				cout<<x<<endl;}
			else{
				if(z>0){
					cout<<-1<<endl;}
				else{
					cout<<(abs(z)*2+x)<<endl;}}}
	else if((x>0)and(y>x)){
		cout<<x<<endl;
		}
	else if((x<0)and(y>x)){
		if((z>y)and(z<0)){
				cout<<abs(x)<<endl;}
			else{
				if(z<0){
					cout<<-1<<endl;}
				else{
					cout<<(2*z+abs(x))<<endl;}}}
	else if((x<0)and(y<x)){
		cout<<abs(x)<<endl;}
	}
 
	
    
return 0;} 
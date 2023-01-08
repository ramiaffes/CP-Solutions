#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<string ,bool>vis;
map<string,long long int>dp;

int main()
{
	fast;	
	long long int n,m,k;
	cin>>n>>m;
	map<pair<long long int,long long int>,bool>vis;
	for(long long int i(0);i<m;i++){
		cin>>k;
	vector<long long int>vect(k);
	for(long long int i(0);i<k;i++){cin>>vect[i];}
	for(long long int i(0);i<(k-1);i++){
		for(long long int j(i+1);j<k;j++){
			vis[make_pair(vect[i],vect[j])]=1;
			vis[make_pair(vect[j],vect[i])]=1;}}	}
	bool test=true;
	for(long long int i(1);i<n;i++){
		for(long long int j(i+1);j<=n;j++){
			if(vis[make_pair(i,j)]==0){
				test=false;break;}}}
	if(test==false)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	

    
return 0;} 

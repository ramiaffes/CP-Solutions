#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
	long long int p=1;
	for(long long int i(0);i<k;i++){
		p*=n;}
	return p;}
int main()
{
	fast;	
	int h,w,x,y;
	cin>>h>>w>>x>>y;
	vector<string>vect(h);
	for(int i=0;i<h;i++)cin>>vect[i];
	int som=0;
	map<pair<int,int>,bool>vis;
	if(vect[x-1][y-1]=='#'){cout<<0<<endl;return 0;}
	for(int i=x-1;i>=0;i--){
		if(vect[i][y-1]=='#')break;
		if(vis[make_pair(i,y-1)]==1)continue;
		
		vis[make_pair(i,y-1)]=1;
		som++;}
	for(int i=x;i<h;i++){
		if(vect[i][y-1]=='#')break;
		if(vis[make_pair(i,y-1)]==1)continue;
		vis[make_pair(i,y-1)]=1;
		som++;}
	for(int i=y-1;i>=0;i--){
		if(vect[x-1][i]=='#')break;
		if(vis[make_pair(x-1,i)]==1)continue;
		vis[make_pair(x-1,i)]=1;
		som++;}
	for(int i=y;i<w;i++){
		if(vect[x-1][i]=='#')break;
		if(vis[make_pair(x-1,i)]==1)continue;
		vis[make_pair(x-1,i)]=1;
		som++;}
	cout<<som<<endl;
	
	
	
	
    
    
return 0;}
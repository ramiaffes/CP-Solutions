#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;

int main()
{
	fast;	
	string s;
	long long int a,b;
	cin>>a>>b;
	map<int,set<int>>se;
	se[1]={1};
	se[2]={2};
	se[3]={2,1};
	se[4]={4};
	se[5]={4,1};
	se[6]={4,2};
	se[7]={4,2,1};
	set<int>se1;
	for(auto v:se[a]){
		se1.insert(v);}
	for(auto v:se[b]){
		se1.insert(v);}
	int som=0;
	for(auto v:se1)som+=v;
	cout<<som<<endl;
 
	
    
return 0;} 

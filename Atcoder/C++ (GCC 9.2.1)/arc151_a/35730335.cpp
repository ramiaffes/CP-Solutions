#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<string ,bool>vis;
map<string,long long int>dp;

int main()
{
	fast;	
	long long int n,k;
	cin>>n;
	vector<long long int>vect(n);
	map<long long int,vector<long long int>>hashing;
	for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]%2].push_back(vect[i]);}
	sort(hashing[0].begin(),hashing[0].end());
	sort(hashing[1].begin(),hashing[1].end());
	long long int ans=-1;
	if(hashing[0].size()>=2){
		ans=max(ans,hashing[0][hashing[0].size()-1]+hashing[0][hashing[0].size()-2]);}
		if(hashing[1].size()>=2){
		ans=max(ans,hashing[1][hashing[1].size()-1]+hashing[1][hashing[1].size()-2]);}
	cout<<ans<<endl;
	
	
	

    
return 0;} 

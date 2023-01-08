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
	long long int n,m;
	cin>>n>>m;
	vector<long long int>vect(n);
	for(long long int i(0);i<n;i++)cin>>vect[i];
	vector<long long int>dp(n);
	vector<long long int>dp1(n);
	dp[0]=vect[0];
	for(long long int i=1;i<n;i++){
		dp[i]=dp[i-1];
		dp[i]+=vect[i];}
	dp1[n-1]=vect[n-1];
	for(long long int i(n-2);i>=0;i--){
		dp1[i]=dp1[i+1];
		dp1[i]+=vect[i];}
	long long int som=0;
	long long int ans=-1e18;
	long long int val=dp[n-1];
	bool test=false;
	for(long long int i(0);i<m;i++){
		som+=(i+1)*vect[i];}
		for(long long int i(0);i<=(n);i++){
		ans=max(ans,som);
		if((i+m)<n){
		som+=m*vect[i+m];
		val=dp[n-1];
		if(i>=1){
		val-=dp[i-1];}
		if((i+m)<n)
		val-=dp1[i+m];
		som-=(val);}
		}
	ans=max(ans,som);
	cout<<ans<<endl;
	
	
	
    
    
return 0;}


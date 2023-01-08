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
	long long int n;
	cin>>n;
	vector<long long int>vect(n);
	for(long long int i(0);i<n;i++)cin>>vect[i];
	long long int tot=1<<n;
	long long int som=0;
	long long int var=0;
	long long int ans=1000000000000000;
	for(long long int mask=0;mask<tot;mask++){
		som=0;
		var=0;
		for(long long int i=0;i<n;i++){
			long long int f=1<<i;
			if(mask&f){
				som^=var;
				var=vect[i];
				}
			else{
				var=var|vect[i];}}
			som^=var;
			ans=min(ans,som);
			}
	cout<<ans<<endl;
	
	
    
    
return 0;}
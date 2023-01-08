#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
	fast;	
	int n,q,l,s,t;
	cin>>n>>q;
	vector<map<long long int,long long int>>res(n);
	for(int i=0;i<n;i++){
		cin>>l;
		vector<long long int>vect(l);
		for(int j(0);j<l;j++){
			cin>>vect[j];
			res[i][j]=vect[j];}}
	for(int i=0;i<q;i++){
		cin>>s>>t;
	cout<<res[s-1][t-1]<<endl;
		}
	
    
return 0;} 

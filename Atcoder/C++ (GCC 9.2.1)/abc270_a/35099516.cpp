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
	int a,b,c,d,e;
	string s;
	string t;cin>>s;
	cin>>t;
	if(s>t)cout<<"No"<<endl;
	else{
	
	string m=t.substr(0,s.length());
	if(m==s)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;}
	
	
		
return 0;}

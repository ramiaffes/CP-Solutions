#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<string ,bool>vis;
map<string,long long int>dp;

int main()
{
	fast;	
	long long int n;
	cin>>n;
	vector<long long int>vect(n);
	long long int som=0;
	for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
	cout<<som<<endl;
    
return 0;} 

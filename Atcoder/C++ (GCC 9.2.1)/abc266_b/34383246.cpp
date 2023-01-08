#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
 
int main()
{
	fast;	
	long long int n;
	cin>>n;
	if(n>=0){
	cout<<(n%998244353)<<endl;}
	else{
		cout<<(-(abs(n)%998244353)+((-(abs(n)%998244353))!=0)*998244353)<<endl; }
	
	
	
    
    
return 0;}

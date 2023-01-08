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
	string s;
	cin>>s;
	if(s=="Monday")cout<<5<<endl;
	else if(s=="Tuesday")cout<<4<<endl;
	else if(s=="Wednesday")cout<<3<<endl;
	else if (s=="Thursday")cout<<2<<endl;
	else if(s=="Friday")cout<<1<<endl;
	else if(s=="Sunday")cout<<6<<endl;
	else cout<<7<<endl;

	
	
	
    
    
return 0;}


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
	vector<bool>test(7);
   test[0]=(s[6]=='0');
	test[1]=(s[3]=='0');
	test[2]=(s[1]=='0')and(s[7]=='0');
	test[3]=(s[4]=='0')and(s[0]=='0');
	test[4]=(s[8]=='0')and(s[2]=='0');
	test[5]=(s[5]=='0');
	test[6]=(s[9]=='0');
	bool test1=false;
	for(int i=0;i<(6);i++){
		for(int j=i+1;j<=6;j++){
			if((test[i]==true)or(test[j]==true))continue;
			for(int d(i+1);d<j;d++){
				if((test[d]==true)and(s[0]=='0')){test1=true;break;}}
			}
		}
	if(test1)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	
	
    
    
return 0;}
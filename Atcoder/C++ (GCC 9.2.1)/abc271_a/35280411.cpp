#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
	fast;	
	int n;
	cin>>n;
	string str;
	map<int,string>hashing;
	for(int i=0;i<=9;i++)
	hashing[i]=to_string(i);
	for(int i=10;i<=15;i++){
		string str2(1,i-10+65);
		hashing[i]=str2;}
	while(n!=0){
		str.append(hashing[n%16]);
		n/=16;}
	reverse(str.begin(),str.end());
	while(str.length()<2){
		str.insert(0,"0");}
	cout<<str<<endl;

	
    
return 0;} 

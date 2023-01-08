#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
	fast;	
	long long int n;
	string s;
	string t;
	cin>>n;
	cin>>s;
	cin>>t;
	string var(n,'0');
	long long int som1=0;
	long long int som2=0;
	long long int som3=0;
	long long int som4=0;
	vector<long long int>res;
	vector<long long int>res2;
	for(long long int i(0);i<n;i++){
		if((var[i]!=s[i])and(var[i]!=t[i])){
			som1++;
			continue;
		}
	else if((var[i]==s[i])and(var[i]==t[i])){
		som2++;
		continue;
	}
	else{
		if((var[i]==s[i])and(var[i]!=t[i])){
			som3++;
			res.push_back(i);
			continue;}
		else{
			som4++;
			res2.push_back(i);
			continue;}}
		}
	if(som3==som4){
		cout<<var<<endl;}
	else if(som3!=som4){
		vector<long long int>se;
		for(auto v:res){se.push_back(v);}
		for(auto v:res2){se.push_back(v);}
		if(abs(som3-som4)%2==1){
			cout<<-1<<endl;}
		else{
			if(som3>som4){
				if(res.size()<(abs(som3-som4)/2)){
					cout<<-1<<endl;}
			else{
		sort(res.begin(),res.end());
		reverse(res.begin(),res.end());

		for(long long int i(0);i<(abs(som3-som4)/2);i++){
			var[res[i]]='1';}
		cout<<var<<endl;}}
		else{
			if(res2.size()<(abs(som3-som4)/2)){
					cout<<-1<<endl;}
			else{
		sort(res2.begin(),res2.end());
		reverse(res2.begin(),res2.end());

		for(long long int i(0);i<(abs(som3-som4)/2);i++){
			var[res2[i]]='1';}
		cout<<var<<endl;}}
		}
		
		}
		
		
		
	
	
		
		
	
	
	
	
	
 
    
return 0;} 

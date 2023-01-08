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
	deque<long long int>vect(n);
	for(long long int i(0);i<n;i++){
		cin>>vect[i];
		}
	sort(vect.begin(),vect.end());
	long long int som=0;
	while(vect.size()!=1){
		long long int val1=vect[0];
		long long int val2=vect[vect.size()-1];
		if(val2%val1==0){
			vect.pop_back();
			}
		else{
			vect.pop_back();
			vect.push_front(val2%val1);}
		som++;
		
		}
	cout<<som<<endl;
	
	
	
    
    
return 0;}


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
	long long int n,x,y;
    cin>>x>>y>>n;
  if(n%3==0){
  cout<<min((n/3)*y,n*x)<<endl;}
  else if(n%3==2){
  cout<<(min((n/3)*y+2*x,n*x))<<endl;}
  else{
  cout<<min((n/3)*y+x,n*x)<<endl;}
		
	
	
	
	
	
		
	
	
	
    
    
return 0;}
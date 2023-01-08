#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
 long long int CrossProduct(pair<long long int,long long int> A,pair<long long int,long long int> B,pair<long long int,long long int> C)
{
    long long int X1 = (B.first - A.first);
 

   long long  int Y1 = (B.second - A.second);
 
 
    long long int X2 = (C.first - A.first);
 
   
    long long int Y2 = (C.second - A.second);
 
    return (X1 * Y2 - Y1 * X2);
}
int main()
{
	fast;	
	long long int a1,a2,b1,b2,c1,c2,d1,d2;
	cin>>a1>>a2;
	cin>>b1>>b2;
	cin>>c1>>c2;
	cin>>d1>>d2;
	long long int res1=CrossProduct(make_pair(a1,a2),make_pair(b1,b2),make_pair(c1,c2));
	long long int res2=CrossProduct(make_pair(b1,b2),make_pair(c1,c2),make_pair(d1,d2));
	if((res1*res2)<0){
		cout<<"No"<<endl;}
	else {
		res1=CrossProduct(make_pair(b1,b2),make_pair(c1,c2),make_pair(d1,d2));
		res2=CrossProduct(make_pair(c1,c2),make_pair(d1,d2),make_pair(a1,a2));
		if((res1*res2)<0){
			cout<<"No"<<endl;}
		else{
			res1=CrossProduct(make_pair(c1,c2),make_pair(d1,d2),make_pair(a1,a2));
			res2=CrossProduct(make_pair(d1,d2),make_pair(a1,a2),make_pair(b1,b2));
			if(res1*res2<0){
				cout<<"No"<<endl;}
			else{
				res1=CrossProduct(make_pair(d1,d2),make_pair(a1,a2),make_pair(b1,b2));
				res2=CrossProduct(make_pair(a1,a2),make_pair(b1,b2),make_pair(c1,c2));
				if((res1*res2)<0)cout<<"No"<<endl;
				else cout<<"Yes"<<endl; }
		}}
	
	
	
	
    
    
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e4;
map<long long int,set<long long int>>adj;
map<pair<long long int,long long int>,long long int>hashing;
map<long long int,bool>vis;
long long int som=0;
long long int som1=0;
 
int main()
{
 fast;
 long long int a,b,c;
 cin>>a>>b>>c;
if(((a-b+c)%2!=0)or((b-c+a)%2!=0)or((c-a+b)%2!=0)or((a-b+c)<0)or((b-c+a)<0)or((c-a+b)<0)){
 cout<<"Impossible"<<endl;}
else{
 cout<<((b-c+a)/2)<<" "<<((c-a+b)/2)<<" "<<((a-b+c)/2)<<endl;}
 
return 0;}
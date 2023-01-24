#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
long long int l[1001][1001] = { 0 };
 
 
 
int main()
{
 fast; 
 long long int t,n,x,y;
 cin>>n;
 map<pair<long long int,long long int>,long long int>hashing;
 map<pair<long long int,long long int>,long long int>hashing3;
 for(long long int i(0);i<n;i++){
  cin>>x>>y;
   hashing[make_pair(x+(y-1),1)]++;
   hashing3[make_pair((x-(y-1)),1)]++;}
 long long int som=0;
 for(auto v:hashing){
  som+=hashing[v.first]*(hashing[v.first]-1)/2;}
 for(auto v:hashing3){
  som+=hashing3[v.first]*(hashing3[v.first]-1)/2;}
 cout<<som<<endl;
 
 
 
 
 
 
 
return 0;}
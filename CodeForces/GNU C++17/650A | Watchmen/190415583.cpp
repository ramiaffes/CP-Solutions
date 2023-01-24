#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
int main()
{
 fast; 
 long long int t,n,x,y;
 cin>>n;
 vector<pair<long long int,long long int>>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>x>>y;
  vect[i]=make_pair(x,y);}
 map<long long int,long long int>hashing;
 map<pair<long long int,long long int>,long long int>hashing1;
 map<long long int,long long int>hashing2;
 for(long long int i(0);i<n;i++){
  hashing[vect[i].first]++;
  hashing2[vect[i].second]++;
  hashing1[make_pair(vect[i].first,vect[i].second)]++;}
 long long int som=0;
 for(auto v:hashing){
  som+=hashing[v.first]*(hashing[v.first]-1)/2;}
 for(auto v:hashing2){
  som+=hashing2[v.first]*(hashing2[v.first]-1)/2;}
for(auto v:hashing1){
  som-=hashing1[v.first]*(hashing1[v.first]-1)/2;}
cout<<som<<endl;
 
 
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
map<long long int, bool>vis;
map<long long int,vector<long long int>>adj;
 
int main()
{
fast;
long long int n,a,b;
cin>>n;
vector<long long int>vect(n);
long long int som=0;
for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;}
for(auto v:hashing){
 if(v.first==0){
  som+=hashing[v.first]*(hashing[v.first]-1)/2;}
 else if(v.first>0){
  som+=hashing[v.first]*hashing[-v.first];}}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
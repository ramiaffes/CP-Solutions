#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,bool>vis;
map<long long int ,long long int >hashing;
long long int som=0;
int main()
{
fast;
long long int n,k,x;
cin>>n>>k;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){
 cin>>vect[i];}
long long int som=0;
sort(vect.begin(),vect.end());
for(long long int i(0);i<(n);i++){
 hashing[vect[i]]++;}
for(long long int i(0);i<(n-1);i++){
 if(vect[i]!=vect[i+1]){
  if(vect[i+1]<=(vect[i]+k)){
   som+=hashing[vect[i]];}}}
cout<<(n-som)<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
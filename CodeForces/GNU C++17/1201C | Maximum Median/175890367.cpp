#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
 map<pair<long long int,long long int>,bool>vis;
 long long int som=0;
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 map<long long int,long long int>hashing;
 vector<int>vect1(vect.begin()+(n-1)/2,vect.end());
 for(int i=0;i<vect1.size();i++){
  
  hashing[vect1[i]]++;
  }
  auto ip = unique(vect1.begin(), vect1.end());
    vect1.resize(distance(vect1.begin(), ip));
    long long int val1=-1;
    for(int i=0;i<(vect1.size()-1);i++){
  if((hashing[vect1[i]]*(vect1[i+1]-vect1[i]))>k){
   val1=vect1[i]+(k/hashing[vect1[i]]);break;}
  else{
   k-=(hashing[vect1[i]]*(vect1[i+1]-vect1[i]));
   hashing[vect1[i+1]]+=hashing[vect1[i]];
   }}
  if(val1==-1){
   val1=vect1[vect1.size()-1]+(k/hashing[vect1[vect1.size()-1]]);}
 cout<<val1<<endl;
  
 
  
  
 
 
 
 
 
 
    
return 0;} 
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,m;
 cin>>n>>m;
 vector<long long int>vect(m);
 for(long long int i(0);i<m;i++)cin>>vect[i];
 vector<long long int>res(m);
 map<long long int,long long int>hashing;
 long long int val=1;
 map<long long int,long long int>hashing1;
 for(long long int i(0);i<m;i++){
  hashing[vect[i]]++;
  hashing1[hashing[vect[i]]]++;
  if(hashing1[val]==n){
   cout<<1;
   val++;}
 else{cout<<0;}
 }
 
 
 
 
 
 
 
 
 
return 0;}
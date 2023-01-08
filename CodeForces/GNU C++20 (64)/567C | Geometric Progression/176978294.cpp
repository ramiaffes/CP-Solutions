#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
vector<char>res;
long long int N=1000;
int main()
{
 fast;
 long long int n,k;
cin>>n>>k;
map<long long int,long long int>hashing;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
vector<long long int>dp(n);
for(long long int i(0);i<n;i++){
 if(vect[i]%k!=0){hashing[vect[i]]++;continue;}
 dp[i]=hashing[vect[i]/k];hashing[vect[i]]++;}
map<long long int,long long int>hashing2;
long long int som=0;
for(long long int i(0);i<n;i++){
 som+=hashing2[vect[i]];
 hashing2[k*vect[i]]+=dp[i];}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
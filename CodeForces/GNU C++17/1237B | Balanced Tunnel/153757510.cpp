#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,s,p,q,a,b;
 cin>>n;
 vector<long long int> vect(n); map<long long int ,long long int>hashing;
 for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]=i;}
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++)cin>>vect1[i];
 long long int ans=1e9;
 long long int som=0;
for(long long int i(n-1);i>=0;i--){
 if(hashing[vect1[i]]>ans){
  som++;}
ans=min(ans,hashing[vect1[i]]);}
cout<<som<<endl;
 
return 0;}  
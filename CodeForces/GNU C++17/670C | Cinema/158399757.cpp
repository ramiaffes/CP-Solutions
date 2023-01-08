#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,m,q,l,r;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 cin>>m;
 vector<long long int>vect1(m);
 for(long long int i(0);i<m;i++){
  cin>>vect1[i];}
 vector<long long int>vect2(m);
 for(long long int i(0);i<m;i++)cin>>vect2[i];
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){
  hashing[vect[i]]++;}
 long long int ans=0;vector<pair<long long int,long long int>>vect3;
 for(long long int i(0);i<m;i++){
  ans=max(ans,hashing[vect1[i]]);}
 for(long long int i(0);i<m;i++){
  if(hashing[vect1[i]]==ans){
   vect3.push_back(make_pair(hashing[vect2[i]],i+1));}}
 sort(vect3.begin(),vect3.end());
 cout<<vect3[vect3.size()-1].second<<endl;
 
 
 
 
 
 
 
 
 
 
    
    
return 0;}
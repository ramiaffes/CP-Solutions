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
 long long int n,x,y;
 string s;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 vector<pair<long long int,long long int>>vect1(n);
 for(long long int i(0);i<n;i++){
  vect1[i]=make_pair(vect[i],i);}
 sort(vect1.begin(),vect1.end());
 vector<long long int>vect2(n);
 for(long long int i(0);i<n;i++){
  vect2[i]=vect1[i].first;}
 for(long long int i(1);i<n;i++){
  if(vect2[i]==vect2[i-1]){
   vect2[i]++;}
  else if(vect2[i]<vect2[i-1]){
   vect2[i]=vect2[i-1]+1;}
  }
 vector<long long int>res(n);
 for(long long int i(0);i<n;i++){
  res[vect1[i].second]=vect2[i];}
 for(auto v:res)cout<<v<<" ";
 
 
 
 
    
    
return 0;}
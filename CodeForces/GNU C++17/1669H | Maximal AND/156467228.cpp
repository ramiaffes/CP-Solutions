#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast;
long long int n,k,t;
cin>>t;
while(t--){
cin>>n>>k;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
vector<vector<long long int>>vect1(n);
for(long long int i(0);i<n;i++){
 long long int val=vect[i];
 while(val!=0){
  vect1[i].push_back(val%2);
  val/=2;}
reverse(vect1[i].begin(),vect1[i].end());
}
map<long long int,long long int>hashing;
for(long long int i(0);i<n;i++){
 while(vect1[i].size()<31){
  vect1[i].insert(vect1[i].begin()+0,1,0);}}
for(long long int i(0);i<n;i++){
 for(long long int j(0);j<vect1[i].size();j++){
  if(vect1[i][j]==0){hashing[j]++;}}}
long long int var=0;
vector<long long int>res;
for(long long int i(0);i<31;i++){
 var+=hashing[i];
 if(var>k){res.push_back(0);var-=hashing[i];continue;}
 else{res.push_back(1);}}
long long int som=0;
long long int val21=power(2,30);
for(long long int i(0);i<res.size();i++){
 if(res[i]==1){
  som+=val21;}
 val21/=2;}
cout<<som<<endl;
 
 
 
 
 
}
 
   return 0;}
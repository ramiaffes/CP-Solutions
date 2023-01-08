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
long long int n,k;
string s;
cin>>n>>k;
cin>>s;
map<char,long long int>hashing;
for(long long int i(0);i<n;i++){
 hashing[s[i]]++;}
set<pair<long long int,char>>res;
for(long long int i(0);i<n;i++){
 res.insert(make_pair((hashing[s[i]]),s[i]));}
vector<pair<long long int,char>>res2(res.begin(),res.end());
sort(res2.begin(),res2.end());
reverse(res2.begin(),res2.end());
long long int val=0;
long long int som=0;
for(auto v:res2){
 if((val+v.first)>k){
  som+=(k-val)*(k-val);break;}
 else{
  som+=v.first*v.first;
  val+=v.first;}}
cout<<som<<endl;
 
 
 
   return 0;}
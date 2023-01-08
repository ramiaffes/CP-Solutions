#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=0;
void func(vector<long long int>vect){}
int main()
{
 fast;
 
 long long int n;
 cin>>n;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){cin>>vect[i];}
 vector<long long int>res(n);
 for(long long int i(0);i<n;i++){
  long long int som=0;
  for(long long int j(0);j<vect[i].length();j++){
   som+=vect[i][j]-'0';}
 res[i]=som;}
for(long long int i(0);i<n;i++){
 res[i]=res[i]%3;}
map<long long int,long long int>hashing;
for(long long int i(0);i<n;i++){
 hashing[res[i]]++;}
cout<<(min(hashing[2],hashing[1])+hashing[0]/2)<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
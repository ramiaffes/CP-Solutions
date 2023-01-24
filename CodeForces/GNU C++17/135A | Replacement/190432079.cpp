#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
map<long long int ,long long int>hashing;
int main()
{
 fast;
 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>res(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
if(vect[0]==1){
 res[0]=1;
 res[1]=1;
 for(long long int i(2);i<n;i++){
  res[i]=vect[i-1];}}
else{
 res[0]=1;
 for(long long int i(1);i<n;i++){
  res[i]=vect[i-1];}}
if(vect[n-1]==1)res[n-1]=2;
for(auto v:res)cout<<v<<" ";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
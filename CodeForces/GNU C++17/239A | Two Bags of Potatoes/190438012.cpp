#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e6;
 
 
int main()
{
 fast;
   long long int y,k,n;
   cin>>y>>k>>n;
   vector<long long int>res;
   n=(n/k)*k;
if(k==1){
 for(long long int i(y+1);i<=n;i++){
  res.push_back(i-y);}}
else{
while(n!=0){
 if((n-y)>=1){
  res.push_back(n-y);}
 else{break;}
 n-=k;}}
sort(res.begin(),res.end());
if(res.size()==0)cout<<-1<<endl;
else{
 
 for(auto v:res)cout<<v<<" ";}
 
  
   
   
 
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
long long int n,k;
cin>>n>>k;vector<long long int>res;
for(long long int i(1);i<=(n-k);i++){
 res.push_back(i);}
long long int i=n-k+1;
long long int j=n;
while(i<j){
 res.push_back(j);
 res.push_back(i);
 i++;
 j--;}
if(i==j)res.push_back(i);
for(auto v:res)cout<<v<<" ";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
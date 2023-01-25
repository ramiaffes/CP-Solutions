#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e6;
map<long long int,bool>vis;
 
int main()
{
 fast;
    long long int n;
   cin>>n;
   vector<long long int>vect(n);
   for(long long int i(0);i<n;i++){cin>>vect[i];vis[vect[i]]=1;}
   long long int i;
   for(i=1;i<=3000;i++){
    if(vis[i]==0)break;}
 cout<<i<<endl;
   
  
   
   
 
 
 
 
 
 
return 0;}
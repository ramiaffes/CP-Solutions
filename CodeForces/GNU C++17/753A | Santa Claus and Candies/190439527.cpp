#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
map<long long int,long long int>vis;
int main()
{
 fast;
   long long int n,k;
   cin>>n;
   long long int i=0;
   while((i*(i+1)/2)<=n){
    i++;}
 i--;
 cout<<i<<endl;
 for(long long int j(1);j<=(i-1);j++){
  cout<<j<<" ";}
 cout<<(i+n-(i*(i+1)/2))<<endl;
 
 
   
 
 
 
 
return 0;}
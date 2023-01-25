#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
map<long long int,long long int>vis;
int main()
{
 fast;
   long long int n,m,l,r,type;
   cin>>n;
   vector<long long int>vect(n);
   
   for(long long int i(0);i<n;i++)cin>>vect[i];
   vector<long long int>vect1(vect);
   sort(vect1.begin(),vect1.end());
   cin>>m;
   vector<long long int>dp1(n);
   vector<long long int>dp2(n);
   dp1[n-1]=vect[n-1];
   dp2[n-1]=vect1[n-1];
   for(long long int i(n-2);i>=0;i--){
    dp1[i]=dp1[i+1]+vect[i];}
  for(long long int i(n-2);i>=0;i--){
    dp2[i]=dp2[i+1]+vect1[i];}  
   for(long long int i(0);i<m;i++){
    cin>>type>>l>>r;
    if(type==1){
     cout<<(dp1[l-1]-dp1[r-1]+vect[r-1])<<endl;
     }
    else{
     cout<<(dp2[l-1]-dp2[r-1]+vect1[r-1])<<endl;
     }
    }
 
 
 
 
return 0;}
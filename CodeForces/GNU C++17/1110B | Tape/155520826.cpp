#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
int main()
{
 fast;
 long long int n,m,k;
 cin>>n>>m>>k;
 vector<long long int>vect(n);
 long long int som1=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
sort(vect.begin(),vect.end());
vector<long long int>res(n-1);
for(long long int i(0);i<(n-1);i++){
 res[i]=vect[i+1]-vect[i];som1+=res[i];}
sort(res.begin(),res.end());
reverse(res.begin(),res.end());
long long int som=0;
for(long long int i(0);i<(k-1);i++){
 som+=(res[i]-1);}
cout<<(som1-som+1)<<endl;
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}  
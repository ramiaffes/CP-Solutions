#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int ,vector<long long int>>adj;
long long int power(long long int d,long long int a){
 long long int p=1;
 for(long long int i(0);i<a;i++){
  p*=d;}
 return p;}
int main()
{
 fast;
 long  long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>vect1(n);
 vector<long long int>res(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<n;i++)cin>>vect1[i];
 for(long long int i(0);i<n;i++)res[vect[i]-1]=vect1[i];
 for(long long int i(0);i<n;i++)cout<<res[i]<<" ";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
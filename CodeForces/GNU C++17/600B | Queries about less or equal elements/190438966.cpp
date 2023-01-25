#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,bool>destroyed;
map<long long int ,long long int>parent;
int main()
{
 fast;
 long long int n,m;
 cin>>n>>m;
 vector<long long int>vect(n);
 vector<long long int>vect1(m);
 vector<long long int>res(m);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
  sort(vect.begin(),vect.end());
 for(long long int i(0);i<m;i++){
  cin>>vect1[i];}
 for(long long int i(0);i<m;i++){
  res[i]=vect.size()-(vect.end()-upper_bound(vect.begin(),vect.end(),vect1[i]));}
 for(long long int i(0);i<m;i++)cout<<res[i]<<" ";
  
 
 
 
 
 
return 0;}
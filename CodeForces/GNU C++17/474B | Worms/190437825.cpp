#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,bool>vis;
int main()
{
 fast;
 long long int n,m;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 cin>>m;
 vector<long long int>vect1(m);
 for(long long int i(0);i<m;i++)cin>>vect1[i];
 vector<long long int>res;
 long long int som=0;
 for(long long int i(0);i<(n);i++){
  res.push_back(1+som);
  res.push_back(som+vect[i]);
  som+=vect[i];}
 for(long long int i(0);i<m;i++){
  long long int it=lower_bound(res.begin(),res.end(),(vect1[i]))-res.begin();
  cout<<(it/2+1)<<endl;
  }
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
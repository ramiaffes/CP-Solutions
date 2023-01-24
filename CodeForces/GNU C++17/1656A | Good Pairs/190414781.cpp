#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 string s;
 long long int n,b,a,t;
    cin>>t;
    while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  long long int d=max_element(vect.begin(),vect.end())-vect.begin();
  long long int d1=min_element(vect.begin(),vect.end())-vect.begin();
  cout<<(d1+1)<<" "<<(d+1)<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}
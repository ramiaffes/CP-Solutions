#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
 
int main()
{
 fast;
long long int n;
 cin>>n;
 vector<long long int>res;
 long long int som=0;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){cin>>vect[i];som+=vect[i];}
 for(long long int i(0);i<n;i++){
  if((som%n==0)and(vect[i]==(som/n))){
   res.push_back(i+1);}}
 cout<<res.size()<<endl;
 for(auto v:res)cout<<v<<" ";
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
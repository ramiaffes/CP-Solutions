#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>dp;
long long int som=0;
int main() 
{
 fast;
 long long int n,r,avg,a,b;
 cin>>n>>r>>avg;
 long long int i=0;
 vector<pair<long long int,long long int>>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i].second>>vect[i].first;}
 long long int som=0;
 sort(vect.begin(),vect.end());
 for(long long int i(0);i<n;i++){
  som+=vect[i].second;}
 long long int val2=n*avg-som;
 long long int res=0;
 while((i<n)and(som<(n*avg))){
  long long int val=min(r-vect[i].second,val2);
  som+=val;
  res+=vect[i].first*val;
  val2=n*avg-som;
  i++;}
 cout<<res<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
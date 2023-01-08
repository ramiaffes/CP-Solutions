#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 string s;
 long long int n,a,b;
 cin>>n;
 vector<pair<long long int,long long int>>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>a>>b;
  vect[i]=make_pair(a,b);}
 sort(vect.begin(),vect.end());
 long long int som=0;
 long long int ans=0;
 for(long long int i(0);i<n;i++){
  
  if(ans>vect[i].second)som++;
  ans=max(ans,vect[i].second);
  }
 cout<<som<<endl;
 
 
 
  
 
 
    
    
 
    
    
 
    
    
return 0;}
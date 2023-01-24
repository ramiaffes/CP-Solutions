#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
int main()
{
 fast;
 
 long long int n,x,t;
 string s;
 cin>>s;
 vector<long long int>dp;
 vector<long long int>dp1;
 long long int i=s.find("heavy");
 while(i!=string::npos){
  dp.push_back(i);
  i=s.find("heavy",i+1);
  }
  i=s.find("metal");
 while(i!=string::npos){
  dp1.push_back(i);
  i=s.find("metal",i+1);
  }
long long int som=0;
for(long long int i(0);i<(dp.size());i++){
 auto it=upper_bound(dp1.begin(),dp1.end(),dp[i]);
 som+=dp1.size()-(it-dp1.begin());
 }
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
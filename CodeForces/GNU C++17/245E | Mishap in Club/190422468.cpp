#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int n,k;
    cin>>s;
    long long int som=0;
    long long int ans1=0;
    long long int ans=0;
    long long int res=0;
    for(long long int i(0);i<s.length();i++){
  if((s[i]=='+')){som++;if(som>ans){res++;}ans=max(ans,som);}
  else {som--;if(som<ans1){res++;}ans1=min(ans1,som);}}
 if(som>ans){res++;}ans=max(ans,som);
    if(som<ans1){res++;}ans1=min(ans1,som);
    cout<<res<<endl;
    
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}
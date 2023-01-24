#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,bool>vis;
int main()
{
 fast;
 long long int n,k;
 string s;
 cin>>n>>k;
 cin>>s;
 vector<char>vect(k);
 vector<long long int>dp(n);
 for(long long int i(0);i<k;i++){
  cin>>vect[i];}
if(find(vect.begin(),vect.end(),s[0])!=vect.end()){
 dp[0]=1;}
for(long long int i(1);i<n;i++){
 if(find(vect.begin(),vect.end(),s[i])!=vect.end())
 dp[i]=(dp[i-1]+1);
 }
long long int som=0;
for(long long int i(0);i<n;i++){
 som+=dp[i];}
cout<<som<<endl;
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
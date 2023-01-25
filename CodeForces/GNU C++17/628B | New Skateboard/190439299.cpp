#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast;
    string n;
 cin>>n;
 vector<long long int>dp(n.length());
 for(long long int i(n.length()-1);i>=1;i--){
 dp[i-1]+=dp[i];
 int num=n[i-1]-48;
 int num1=n[i]-48;
 if((num*10+num1)%4==0)dp[i-1]++;}
long long int som=0;
 for(long long int i(0);i<n.length();i++){
  som+=dp[i];}
 for(long long int i(0);i<n.length();i++){
  int num2=n[i]-48;
  if(num2%4==0)som++;} 
 cout<<som<<endl;
 
 
 
  
 
 
 
 
 
return 0;}
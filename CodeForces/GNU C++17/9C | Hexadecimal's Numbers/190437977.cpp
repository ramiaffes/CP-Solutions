#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e6;
 
 
int main()
{
 fast;
   string n;
   cin>>n;
   long long int som=0;
 vector<long long int>dp(n.length());
 dp[0]=1;
 for(long long int i(1);i<(n.length());i++){
  dp[i]=dp[i-1];
  dp[i]*=2;}
 for(long long int i(0);i<(n.length());i++){
  som+=dp[i];}
 bool test=true;
 for(long long int i(0);i<(n.length()-1);i++){
  if(n[i]>'1'){test=false;break;}
  if(n[i]=='0'){
   som-=dp[n.length()-1]/dp[i];}}
if(test!=false){
if(n[n.length()-1]=='0'){
 som-=1;}}
 cout<<som<<endl;
  
   
   
 
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main()
{
 fast;
long long int n,t,k;
cin>>t;
string s;
while(t--){
 cin>>s;long long int som1=0;
 long long int som2=0;
 n=s.length();
 for(long long int i(0);i<3;i++){
  som1+=(s[i]-'0');}
 for(long long int i(n-3);i<n;i++){
  som2+=s[i]-'0';}
 if(som1==som2){
  cout<<"yes"<<endl;}
 else{
  cout<<"NO"<<endl;}}
  return 0;}
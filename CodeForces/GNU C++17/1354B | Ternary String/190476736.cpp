#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long int t;
 cin>>t;
 string s;
 while(t--){
  cin>>s;
  long long int ans=1e6;
  long long int val=0;
  long long int i=0;
  long long int n=s.length();
  while(val<n){
  i=val;
  while((i<n)and(s[i]==s[val]))i++;
  if(i==n){
   break;}
  long long int j=i;
  while((j<n)and(s[j]==s[i])){
   j++;}
  if(j==n){
   break;}
  if(s[j]!=s[val]){
   ans=min(ans,(j-i+2));}
  val=i;
  
 }
 if(ans!=1e6)
 cout<<ans<<endl;
 else cout<<0<<endl;
  }
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
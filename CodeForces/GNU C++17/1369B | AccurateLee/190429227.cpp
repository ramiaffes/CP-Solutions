#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
 fast;
 long long int p,q,n,t;
 string s;
 cin>>t;
 while(t--){
 cin>>n;
 cin>>s;
 long long int i=0;
 string s1;
 string s2;string s4;
 while((i<n)and(s[i]=='0')){
  string val(1,s[i]);
  s1.append(val);
  i++;}
if(i!=n){
long long int j=n-1;
while((j>=0)and(s[j]=='1')){
 string val(1,s[j]);
 s2.append(val);
 j--;}
reverse(s2.begin(),s2.end());
if(j!=-1){
string res;
res.append(s1);
if(i!=(j+1)){
res.append("0");}
res.append(s2);cout<<res<<endl;}
else{
 cout<<s2<<endl;}}
else{
 cout<<s1<<endl;}
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
long long int N=1000;
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
 fast;
 long long int n,m;
 cin>>n>>m;
 vector<long long int>vect(n+1);
 vector<long long int>vect1(m+1);
 for(long long int i(0);i<(n+1);i++){
  cin>>vect[i];
  }
for(long long int j(0);j<(m+1);j++){
 cin>>vect1[j];}
if(n==m){
 long long int val1=abs(vect[0])/gcd(abs(vect[0]),abs(vect1[0]));
 long long int val2=abs(vect1[0])/gcd(abs(vect[0]),abs(vect1[0]));
 string var2=to_string(val1);
 string s;
 string var3=to_string(val2);
 if((vect[0]*vect1[0])<=0){
  s.append("-");}
 s.append(var2);
 s.append("/");
 s.append(var3);
 cout<<(s)<<endl;}
else if(n>m){
 long long int var4=(vect[0]*vect1[0]);
 if(var4>0){
  cout<<"Infinity"<<endl;}
 else{
  cout<<"-Infinity"<<endl;}}
else{
 char var=0+'0';
 char var1=1+'0';
 string s;
 string var2(1,var);
 string var3(1,var1);
 s.append(var2);
 s.append("/");
 s.append(var3);
 cout<<(s)<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
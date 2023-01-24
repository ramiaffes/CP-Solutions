#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
 
int main()
{
 fast;
long long int n,t,k;
string s="codeforces";
map<long long int,char>m;
 cin>>k;
 long long int i=1;
 long long int val=0;
 while(power(i,10)<k){
  i++;}
val=power(i,10);
 
vector<long long int>res(10);
for(long long int j(0);j<10;j++){
 res[j]=i;}
long long int j=10;
while((power(i,j)*power((i-1),(10-j)))>=k){
 j--;
 }
j++;
for(long long int i(0);i<(10-j);i++){
 res[i]--;}
string res1;
for(long long int i(0);i<10;i++){
 string s2(res[i],s[i]);
 res1.append(s2);}
cout<<res1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;
 
 
int main()
{
 fast;
long long int m;
string s,t;
cin>>s;
cin>>t;
long long int n=t.length();
long long int i=0;
string res(n,' ');
while((i<n)and(s[i]==t[i])){
 res[i]=s[i];
 i++;}
if(i==n){
 cout<<"No such string"<<endl;}
else{
 long long int val1=s[i]-'0';
 long long int val2=t[i]-'0';
 if(val2>(val1+1)){
  char v=(val1+1)+'0';
  res[i]=v;
  for(long long int j(i+1);j<n;j++){
   res[j]=s[j];
   }
  cout<<res<<endl;}
 else{
  bool test=false;long long int ind=0;
  for(long long int j(i+1);j<n;j++){
   if(s[j]!='z'){
    test=true;ind=j;break;}}
  if(test==true){res[i]=s[i];
   for(long long int j(i+1);j<n;j++){
   if(j==ind){
    res[j]=(s[ind]-'0')+1+'0';}
   else{
    res[j]=s[j];}}
  cout<<res<<endl;
   }
  else{
   bool test1=false;
   long long int ind1=0;
   res[i]=t[i];
   for(long long int j(i+1);j<n;j++){
   if(t[j]!='a'){
    test1=true;ind1=j;break;}}
   if(test1==false){
    cout<<"No such string"<<endl;}
   else{
    for(long long int j(i+1);j<n;j++){
      if(j==ind1){
    res[j]=(t[ind1]-'0')-1+'0';}
   else{
    res[j]=t[j];}
     }
   cout<<res<<endl;
    }
   
   }}
   
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
int main()
{
 fast;
 
 long long int n,x,t;
 string s;
 cin>>s;
 long long int ans=1e6;
 long long int var1=s[s.length()-1]-'0';
 long long int val;
 long long int val2=1e6;
 bool test=false;
 for(long long int i(0);i<s.length();i++){
  long long int var=s[i]-'0';
  if(var%2==0){
  if(var<var1){
  test=true;val=i; break;}
  val2=i;}}
if(test==false){
 if(val2==1e6)cout<<-1<<endl;
 else{
 swap(s[val2],s[s.length()-1]);
 cout<<s<<endl;}
 }
else{
 swap(s[val],s[s.length()-1]);
cout<<s<<endl;}
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
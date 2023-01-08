#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
int main()
{
 fast;
 long long int n;
 cin>>n;
 string s;
 set<string>res;
 for(long long int i(0);i<n;i++){
  cin>>s;
 while(s.find("u")!=string::npos){
  s.replace(s.find("u"),1,"oo");}
 while(s.find("kh")!=string::npos){
  s.replace(s.find("kh"),2,"h");}
res.insert(s);}
cout<<res.size()<<endl;
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}  
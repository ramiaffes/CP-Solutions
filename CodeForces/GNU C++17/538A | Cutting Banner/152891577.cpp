#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int a,k;
 string s;
 cin>>s;
 bool test=false;
 for(long long int i(0);i<s.length();i++){
  for(long long int j(0);j<(s.length());j++){string  str1;string str2;
   if(i!=0){ str1=s.substr(0,i);}
  if(j+1<s.length()){
   str2=s.substr(j+1,s.length()-j-1);}
   string str3;
   str3.append(str1);
   str3.append(str2);
   if(str3=="CODEFORCES"){test=true;break;}}}
if(test==true){
 cout<<"YES"<<endl;}
else{
 cout<<"NO"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
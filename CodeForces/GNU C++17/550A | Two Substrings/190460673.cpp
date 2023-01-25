#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 string s;
 cin>>s;
 long long int n=s.length();
 bool test=false;
 bool test1=false;
 long long int som1=0;
 long long int som2=0;
 for(long long int i(0);i<(n-1);i++){if((test==true)or(test1==true)){
   test=false;test1=false;continue;}
 else if((som1==0)and(s[i]=='A')and(s[i+1]=='B')){
   test=true;
   som1=1;}
  
  else if ((som1==1)and(s[i]=='B')and(s[i+1]=='A')){
   test1=true;
   som2=1;}}
 if((som1==som2)and(som1==1))cout<<"YES"<<endl;
 else{
  bool test=false;
 bool test1=false;
 long long int som1=0;
 long long int som2=0;
  for(long long int i(0);i<(n-1);i++){if((test==true)or(test1==true)){
   test=false;test1=false;continue;}
 else if((som1==0)and(s[i]=='B')and(s[i+1]=='A')){
   test=true;
   som1=1;}
  
  else if ((som1==1)and(s[i]=='A')and(s[i+1]=='B')){
   test1=true;
   som2=1;}}
  
 if((som1==som2)and(som1==1))cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
  }
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
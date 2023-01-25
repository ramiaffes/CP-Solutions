#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 string n;
 cin>>n;
 long long int i=0;
 bool test=false;
 for(i=0;i<n.length();i++){
  if((n[i]=='0')or(n[i]=='8')){test=true;break;}}
 if(test==true){
  cout<<"YES"<<endl;
  cout<<n[i]<<endl;}
 else if(n.length()<=2){
  if(stoll(n)%8==0)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;}
 else{
  long long int som=0;
  for(long long int i(0);i<(n.length()-1);i++){
   for(long long int j(i+1);j<n.length();j++){
    long long int num1=n[j]-'0';
    long long int num2=n[i]-'0';
    if((num1+num2*10)%8==0){som=(num1+num2*10);test=true; break;}}
    if(test==true)break;}
   if(test==true){cout<<"YES"<<endl; cout<<som<<endl;}
   else{
    for(long long int i(0);i<(n.length()-2);i++){
   for(long long int j(i+1);j<(n.length()-1);j++){
    for(long long int d(j+1);d<(n.length());d++){
     long long int num1=n[j]-'0';
    long long int num2=n[i]-'0';
    long long int num3=n[d]-'0';
     if((num3+num1*10+num2*100)%8==0){som=num3+num1*10+num2*100;test=true; break;}
     }
     if(test==true)break;
    }
    if(test==true)break;}
    if(test==true){cout<<"YES"<<endl; cout<<som<<endl;}
    else{cout<<"NO"<<endl;}}}
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
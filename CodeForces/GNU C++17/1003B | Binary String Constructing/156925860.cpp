#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main(){
 fast;
 long long int a,b,x;
 cin>>b>>a>>x;
 string s;
 int test=0;
 long long int som1=0;
 long long int som2=0; 
 if(a>=b ){ 
  s.append("1");
  for(long long int i(0);i<x;i++){
  if(test==0){
   s.append("0");som2++;}
  else{s.append("1");som1++;}  test=1-test;}
 b-=som2; 
 a-=(som1+1);
 }
 else{
  s.append("0");
  for(long long int i(0);i<x;i++){
  if(test==0){
   s.append("1");som2++;}
  else{s.append("0");som1++;}test=1-test;}
 a-=som2;
 b-=(som1+1);}
 string s1;
 string s2;
 for(long long int i(0);i<a;i++){
  s2.append("1");}
 for(long long int i(0);i<b;i++){
  s1.append("0");}
 s.insert(s.find('0'),s1);
 s.insert(s.find('1'),s2);
 cout<<s<<endl;
  
 
  
 return 0;  } 
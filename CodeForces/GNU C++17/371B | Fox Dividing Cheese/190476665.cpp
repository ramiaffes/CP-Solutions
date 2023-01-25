#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int a,b;
 cin>>a>>b;
 long long int som1=0;
 long long int som2=0;
 long long int som3=0;
 long long int som4=0;
 long long int som5=0;
 long long int som6=0;
 while(a%5==0){
  a/=5;
  som1++;}
 while(b%5==0){
  b/=5;
  som2++;}
 while(b%5==0){
  b/=5;
  som2++;}
 while(a%3==0){
  a/=3;
  som3++;}
 while(b%3==0){
  b/=3;
  som4++;}
while(a%2==0){
  a/=2;
  som5++;}
while(b%2==0){
  b/=2;
  som6++;}
if(a!=b)cout<<-1<<endl;
else{
 cout<<(abs(som1-som2)+abs(som3-som4)+abs(som5-som6))<<endl;}
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
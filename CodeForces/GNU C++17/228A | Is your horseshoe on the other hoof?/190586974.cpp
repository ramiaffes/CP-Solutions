#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 long long int s1,s2,s3,s4; 
  int som(0);
  cin>>s1;
  cin>>s2;
  if(s1==s2){
   som++;
   }
  cin>>s3;
  if((s2==s3)){
   som++;}
  if((s1==s3) and(s1!=s2)){
   som++;}
  cin>>s4;
   if((s2==s4)){
   som++;}
  if((s1==s4) and (s1!=s2)){
   som++;}
  if ((s3==s4) and(s1!=s3) and(s2!=s3)){
   som++;}
  cout<<som<<endl;
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}
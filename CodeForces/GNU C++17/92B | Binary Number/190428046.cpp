#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,set<char>>adj;
map<char,bool>vis;
 
map<pair<char,char>,long long int>val;
map<char,long long int>dist1;
map<char,long long int>dist2;
 
int main()
{
 fast; 
 string n;
 string s1,s2;
 cin>>n;
 long long int som=0;
 if(n=="1")cout<<0<<endl;
 else{
 long long int val=0;
 for(long long int i(n.length()-1);i>=1;i--){
  if((n[i]=='1')and(val==0)){
   som+=2;
   val=1;}
  else if((n[i]=='1')and(val==1)){
   som+=1;
   val=1;}
  else if((n[i]=='0')and(val==1)){
   som+=2;
   val=1;}
  else{
   som+=1;
   val=0;}
 }
 if((val==1)and(n[0]=='1'))som+=1;
 else if((val==0)and(n[0]=='1'))som=som;
 
 cout<<som<<endl;}
 
 
 
 
 
 
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
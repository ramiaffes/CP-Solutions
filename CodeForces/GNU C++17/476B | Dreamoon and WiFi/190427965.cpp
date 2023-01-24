#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,set<char>>adj;
map<char,bool>vis;
long long int som=0;
map<pair<char,char>,long long int>val;
map<char,long long int>dist1;
map<char,long long int>dist2;
 
int main()
{
 fast; 
 long long int n,k;
 string s1,s2;
 cin>>s1>>s2;
 n=s1.length();
 int tot=1<<n;
 int som=0;
 int som3=0;
 int res1=0;
 int res=0;
 for(int i(0);i<n;i++){
  if(s1[i]=='+')
  som3+=1;
  else som3-=1;}
 for(int mask=0;mask<tot;mask++){
  som=0;
  for(int i=0;i<n;i++){
   int f=1<<i;
   if((mask&f)and(s2[i]=='?')){
    som+=1;
    }
   else if(s2[i]=='?'){
    som+=-1;}
   else if(s2[i]=='-')som+=-1;
   else som+=1;}
  if(som==som3){res1++;}res++;
   }
 double var=res1;
  printf("%.12f",var/res);
 
 
 
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
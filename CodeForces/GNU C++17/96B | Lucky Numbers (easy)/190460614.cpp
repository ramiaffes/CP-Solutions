#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 string n;
 cin>>n;
 long long int len=n.length();
 if(stoll(n)<=stoll("47")){
  cout<<47<<endl;}
 else{
 vector<long long int>res;
 long long int tot=1<<len;
 for(long long int mask=0;mask<tot;mask++){
  string s(len,' ');long long int som1=0;
   long long int som2=0;
  for(long long int i=0;i<len;i++){
   long long int f=1<<i;
   if(mask&f){
    s[i]='7';
    som1++;
    }
   else{
    s[i]='4';
    som2++;}}
   if(som1==som2)
   res.push_back(stoll(s));
   }
  long long int tot1=1<<(len+1);
 for(long long int mask=0;mask<tot1;mask++){
  string s(len+1,' ');long long int som1=0;
   long long int som2=0;
  for(long long int i=0;i<(len+1);i++){
   long long int f=1<<i;
   if(mask&f){
    s[i]='7';
    som1++;
    }
   else{
    s[i]='4';
    som2++;}}
   if(som1==som2)
   res.push_back(stoll(s));
   }
  long long int tot2=1<<(len+2);
 for(long long int mask=0;mask<tot2;mask++){
  string s(len+2,' ');long long int som1=0;
   long long int som2=0;
  for(long long int i=0;i<(len+2);i++){
   long long int f=1<<i;
   if(mask&f){
    s[i]='7';
    som1++;
    }
   else{
    s[i]='4';
    som2++;}}
   if(som1==som2)
   res.push_back(stoll(s));
   }
 sort(res.begin(),res.end());
 long long int mh=*(lower_bound(res.begin(),res.end(),stoll(n)));
 cout<<mh<<endl;
 }
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
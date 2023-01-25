#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 int n;
 cin>>n;
 string s;
 
 while(n--){
  cin>>s;
  int s1=0;
   int som=0;
   bool test=false;
  for(int i(0);i<s.length();i++){ 
   som+=(s[i]-'0');
   if(s[i]=='0'){
    s1++;
    }
   if ((s[i]=='6')or(s[i]=='2')or(s[i]=='8')or(s[i]=='4')){
    test=true;
   }
  }
  if((som%3==0)and((s1>=2)or((s1==1)and(test==true)))){
   cout<<"red "<<endl;}
  else{
   cout<<"cyan "<<endl;}
  }
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
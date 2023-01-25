#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 string s;
 cin>>s;
 long long int som=0;
 bool test=false;
 for(long long int i(0);i<(s.length());i++){
  if(i%2==0)som++;
  if((s[i]=='1')and(i>=1))test=true;}
 if((test==false)and(s.length()%2==1))som--;
 cout<<som<<endl;
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}
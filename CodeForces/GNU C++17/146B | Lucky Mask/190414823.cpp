#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 string s;
 long long int n,b,a;
    cin>>a>>b;
    if(b>a){
  cout<<b<<endl;}
 else{
    string str1=to_string(a);
   string str2=to_string(b);
  string str3(str1.length()+1,'9');
  long long int val=stoll(str3);string str5;
  for(long long int i(a+1);i<=val;i++){
   string str4=to_string(i);
   str5.clear();
   for(long long int d(0);d<str4.length();d++){
    if((str4[d]=='4')or(str4[d]=='7')){
     string str6(1,str4[d]);
     str5.append(str6);
     }
   }
  if(str5==str2){
   cout<<str4<<endl;break;}
  
  }
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}
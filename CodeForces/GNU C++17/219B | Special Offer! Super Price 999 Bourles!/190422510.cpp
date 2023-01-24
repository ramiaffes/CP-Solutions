#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int p,d;
    cin>>p>>d;
    long long int val=p-d;
    string str1=to_string(p);
    string str2=to_string(val);
    long long int i=0; 
    string str21(str1.length(),'9');
    if(str21==str1){
  cout<<str21<<endl;}
   else if(str1.length()>str2.length()){
    string str47(1,str1[i]);
    string str48(str1.length()-1,'9');
    str47.append(str48);
    if(str47==str1)cout<<str1<<endl;
   else{
 string str3(1,str1[i]-'0'-1+'0'); 
  if(str1[0]=='1'){
     str3="";}
  string str4(str1.length()-1,'9');
  str3.append(str4);
  cout<<str3<<endl;}}
 else{
 while((i<str2.length())and(str1[i]==str2[i])){
  i++;
  }
 string str10=str1.substr(0,i);
 if((str1.length()-i-1)>=1){
 string st(1,str1[i]-'0'-1+'0');
 str10.append(st);
 string str4(str1.length()-i-1,'9');
 str10.append(str4);}
 else{
 str10=str1;}
 cout<<str10<<endl;
 
 
 
  }
    
 
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<string,long long int>hashing1;
int main()
{
 fast;
 string s;
 string x;
 cin>>x;
 long long int som=0;
 long long int som1=0;
 for(long long int i(0);i<x.length();i++){
  long long int var=x[i]-'0';
  som+=var;}
  for(long long int i(0);i<(x.length()-1);i++){
  som1+=9;}
  som1+=x[0]-'0'-1;
  if(som>=som1)cout<<x<<endl;
  else {
   if(x[1]=='9'){
    long long int i=1;
    while((i<x.length())and(x[i]=='9')){
     i++;}
   i--;
   string res;
   for(long long int j(0);j<i;j++){string var2(1,x[j]);
    res.append(var2);}
   res.append("8");
   for(long long int j(i+1);j<(x.length());j++){
    res.append("9");}
   cout<<res<<endl;
    }
  else if(x[1]=='8'){
    long long int i=2;
    while((i<x.length())and(x[i]=='9')){
     i++;}
   if(i!=x.length()){
   string res;
    long long int var=x[0]-'0';
    char v= var-1+'0';
   string var2(1,v);
   if(var2!="0"){
   res.append(var2);}
   for(long long int i(0);i<(x.length()-1);i++){
   res.append("9");}
   cout<<res<<endl;}
  else{
   string res;
   string var2(1,x[0]);
   if(var2!="0"){
   res.append(var2);}
   res.append("8");
   for(long long int i(0);i<(x.length()-2);i++){
   res.append("9");}
   cout<<res<<endl;
   }}
 else{ string res;
    long long int var=x[0]-'0';
    char v= var-1+'0';
   string var2(1,v);
   if(var2!="0"){
   res.append(var2);}
   for(long long int i(0);i<(x.length()-1);i++){
   res.append("9");}
   cout<<res<<endl;}
  }
  
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
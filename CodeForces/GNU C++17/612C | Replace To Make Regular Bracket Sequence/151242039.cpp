#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 string s;
 long long int n,x,y,t;
    cin>>s;
    vector<char>res;
    long long int som=0;
    map<char,char>m;
    m['>']='<';
    m['}']='{';
    m[']']='[';
    m[')']='(';
    string str="<{[(";
    bool test=true;
    for(long long int i(0);i<s.length();i++){
  if((res.empty())and(str.find(s[i])==string::npos)){test=false;break;}
  if(str.find(s[i])!=string::npos){
   res.push_back(s[i]);}
  else{
   if(res[res.size()-1]!=m[s[i]]){
    som++;}
    res.pop_back();}}
 if((test==false)or(not res.empty()))cout<<"Impossible"<<endl;
 else{
 cout<<som<<endl;}
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}
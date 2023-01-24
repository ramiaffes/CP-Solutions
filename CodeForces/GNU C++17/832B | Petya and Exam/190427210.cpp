#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,t,k;
 string s,s1,var;
 cin>>var;
 cin>>s1;
 cin>>n;
 for(long long int i(0);i<n;i++){
  cin>>s;
  if((s.length()<(s1.length()-1)))cout<<"NO"<<endl;
  else{
   long long int j=0;
   bool test=true;
   while((j<s.length())and(j<s1.length())and(s1[j]!='*')){
    if(((s1[j]!=s[j])and(s1[j]!='?'))or((s1[j]=='?')and(var.find(s[j])==string::npos))){
     test=false;break;}
    j++;}
   if((j==s1.length())and(j<s.length())){cout<<"NO"<<endl;}
   else if(j==s1.length()){
    cout<<"YES"<<endl;}
   else if(j==s.length()){
    if(not((j==(s1.length()-1))and(s1[j]=='*'))){
     cout<<"NO"<<endl;}
    else cout<<"YES"<<endl;}
   else{
   if(test==true){
    long long int j1=s1.length()-1;
    long long int j2=s.length()-1;
   long long int var2=0;
   bool test1=true;
   while((j2>=0)and(j1>=0)and(s1[j1]!='*')){
    if(((s1[j1]!=s[j2])and(s1[j1]!='?'))or((s1[j1]=='?')and(var.find(s[j2])==string::npos))){
     test1=false;break;}
    j1--;
    j2--;
    var2++;}
   if((j1>=0)and(j2<0)and(not((s1[j1]=='*')and(s1.find('*')==0)))){test1=false;}
   if(test1==true){
    bool test2=true;
    if((var2+j)!=s.length()){
    string str=s.substr(j,s.length()-var2-j);
    for(long long int d(0);d<str.length();d++){
     if(var.find(str[d])!=string::npos){test2=false;break;}}
    if(test2==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}
    else{
   cout<<"YES"<<endl;
    
    }}
   else cout<<"NO"<<endl;}
   else cout<<"NO"<<endl;
   }}
   }
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
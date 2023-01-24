#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;vector<string> out;
map<long long int,bool>vis;
int main()
{
 fast;
string s;
long long int n;
cin>>s;
cin>>n;
vector<string>vect(n);
for(long long int i(0);i<n;i++){
 cin>>vect[i];}
bool test=true;
string s1="O0o";
string s2="IiLl1";
long long int som=0;
for(long long int i(0);i<n;i++){
 som=0;
 if(vect[i].length()!=s.length())continue;
 if(s==vect[i]){test=false;break;}
 for(long long int j(0);j<vect[i].length();j++){
  if((vect[i][j]!=s[j])and(abs(vect[i][j]-s[j])!=32)and(not((s1.find(vect[i][j])!=string::npos)and(s1.find(s[j])!=string::npos)))and(not((s2.find(vect[i][j])!=string::npos)and(s2.find(s[j])!=string::npos)))){
   break;
   }
  som++;
  
  }
  if(som==s.length()){test=false;break;}}
if(test==true){
 cout<<"Yes"<<endl;}
else{
 cout<<"No"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
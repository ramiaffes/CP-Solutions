#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
 
 
int main()
{
 fast; 
 long long int n;
 
 string s;
 cin>>s;
 long long int som2=0;
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='2'){
   som2++;
   }
  else if(s[i]=='1'){
   swap(s[i],s[i-som2]);}
  else{
   som2=0;}
   
  }
 long long int som1=0;
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='1'){
   som1++;
   }
  else if(s[i]=='0'){
   swap(s[i],s[i-som1]);}
  else{
   som1=0;}
   
  }
 long long int som=1;
 vector<long long int>res;
 for(long long int i(0);i<(s.length()-1);i++){
  if(s[i]!=s[i+1]){
   res.push_back(som);som=1;}
  else som++;}
 res.push_back(som);
 string s2=s;
 auto it=unique(s2.begin(),s2.end());
 s2.resize(distance(s2.begin(),it));
 if(s2.length()>=3){
 for(long long int i(s2.length()-1);i>=2;i--){
  if((s2[i-2]=='2')and(s2[i-1]=='0')and(s2[i]=='1')){
   swap(s2[i],s2[i-1]);
   swap(s2[i-1],s2[i-2]);
   swap(res[i],res[i-1]);
   swap(res[i-1],res[i-2]);
   }
  else if(s2[i]==s2[i-1]){
   res[i]+=res[i-1];
   res.erase(res.begin()+i-1);
   s2.erase(i-1,1);
   }
  }}
  string res22;
  for(long long int i(0);i<s2.length();i++){
   string str(res[i],s2[i]);
   res22.append(str);}
  s=res22;
  
 
 
 cout<<s<<endl;
 
 
 
 
 
 
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<char,long long int>hashing1;
bool test=true;
 
 
int main()
{
 fast;
 string s;
 string t;
 string res;
 cin>>s>>t;
 for(long long int i(0);i<s.length();i++){
  hashing[s[i]]++;}
long long int val=-1;
for(long long int i(1);i<t.length();i++){
 if((val==-1)and(t[i]==t[0])){
  val+=2;}
 else{
  if(t[i]==t[val]){
   val++;}
  else if(t[i]==t[0]){val=1;}
  else{val=-1;}}}
string val1;
string val2;
bool test=false;
if(val!=-1){
test=true;
 val1=t.substr(val,t.length()-val);
 val2=t.substr(0,val);
}
if(test==true){
long long int i=0;
char val3=val2[0];
while(hashing[val3]!=0){
 string s2(1,val3);
 res.append(s2);
 hashing[val3]--;
 i++;
 if(i>=val2.length()){
  break;} 
 val3=val2[i];
 }
 i=0;
val3=val1[0];
while(hashing[val3]!=0){
 string s2(1,val3);
 res.append(s2);
 hashing[val3]--;
 i++;
 if(i>=val1.length()){
  i=0;} 
 val3=val1[i];
 }
}
else{
 long long int i=0;
char val3=t[0];
while(hashing[val3]!=0){
 string s2(1,val3);
 res.append(s2);
 hashing[val3]--;
 i++;
 if(i>=t.length()){
  i=0;} 
 val3=t[i];
 }}
for(auto v:hashing){
 for(long long int i(0);i<v.second;i++){
 string s2(1,v.first);
 res.append(s2);}
 }
cout<<res<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
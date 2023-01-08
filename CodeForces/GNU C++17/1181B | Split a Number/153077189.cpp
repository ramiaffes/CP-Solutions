#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=0;
void func(vector<long long int>vect){}
int main()
{
 fast;
 
 long long int l; 
 cin>>l;
 string n;
 cin>>n;
 vector<string>res1;
 long long int ans21=l;
 for(long long int i(0);i<(l-1);i++){
  if((n[0]=='0')or(n[i+1]=='0'))continue;
  long long int val2=max(i+1,l-i-1);
  ans21=min(ans21,val2+1);}
 for(long long int i(0);i<(l-1);i++){long long int val21=0;string res;long long int val3=0;long long int val4=0;
  if((n[0]=='0')or(n[i+1]=='0'))continue;
  long long int val2=max(i+1,l-i-1);
  if(ans21<(val2))continue; 
  string n1=n.substr(0,i+1);
  string n2=n.substr(i+1,l-i-1);
  if(n1.length()<n2.length()){
   long long int val45=n2.length()-n1.length();
   for(long long int d(0);d<(val45);d++){
    n1.insert(0,"0");}}
 else if(n2.length()<n1.length()){
   long long int val45=n1.length()-n2.length();
   for(long long int d(0);d<(val45);d++){
    n2.insert(0,"0");}}
  for(long long int d(val2-1);d>=0;d--){
   if(d>=n2.length()){
    val4=0;}
  else{val4=n2[d]-'0';}
  if(d>=n1.length()){
    val3=0;}
  else{val3=n1[d]-'0';}
  long long int val5=(val3+val4+val21);
  if(val5<=9){
   res.append(to_string(val5));val21=0;}
  else{
   res.append(to_string(val5-10));val21=1;}
   }
   if(val21!=0)res.append("1");
   reverse(res.begin(),res.end());
   res1.push_back(res);}
 long long int ans=1e9;
 
 for(auto v:res1){
  long long int s56=v.length();
  ans=min(ans,s56);}string ans1(ans,'9');
 for(auto v:res1){
  if(ans==v.length()){
   ans1=min(ans1,v);}}
 cout<<ans1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
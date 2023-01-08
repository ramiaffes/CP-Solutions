#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main(){
 fast;
 long long int t,n;
 string s;
 cin>>n;
 cin>>s;
 vector<long long int>res;
 long long int som=1;
 for(long long int i(0);i<(n-1);i++){
  if(s[i]!=s[i+1]){
   res.push_back(som);
   som=1;}
  else{som++;}}
 res.push_back(som);
 auto ip = unique(s.begin(), s.end());
    s.resize(distance(s.begin(), ip));
    int test=0;
    long long int som1=0;
    string s2;
    for(long long int i(0);i<s.length();i++){
  string str(1,s[i]);
  if(test==0){
   s2.append(str);
   test=1-test;}
  else{
   if(res[i]<2){
    s2.append(str);test=1-test;
    }
   else{
   s2.append(str);
   s2.append(str); 
   test=1-test;
   test=1-test;}}
  }
 if(s2.length()%2==1)s2.pop_back();
 cout<<(n-s2.length())<<endl;
 cout<<s2<<endl;
 
 return 0;}
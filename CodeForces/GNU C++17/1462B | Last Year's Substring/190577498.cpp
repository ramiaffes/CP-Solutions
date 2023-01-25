#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
bool comp(pair<int,int>t,pair<int,int> x){
 return t.second<=x.second;}
bool fonction(string s1,string s2,string s,long long int n){
 bool test=true;
 for(long long int i(0);i<s1.length();i++){
  test=test and (s[i]==s1[i]);}
  bool test1=(s.substr((n-(s2.length())),s2.length())==s2);
 string s3=s1+s2;
 bool test3=true;
 for(long long int i(0);i<s3.length();i++){
  test3=test3 and (s[i]==s3[i]);}
 bool test4=(s.substr((n-(s3.length())),s3.length())==s3);
 return (test1 and test)or(test4)or(test3);
 }
int main()
{
 fast; 
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>s;
  if(fonction("20","20",s,n) or fonction("2","020",s,n) or fonction("202","0",s,n)){
   cout<<"YES"<<endl;}
  else{
   cout<<"NO"<<endl;}
  
  
  
  
  
 }
  
 
 
 
 return 0;
}
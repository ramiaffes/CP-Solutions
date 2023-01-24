#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
int main()
{
 fast;
 string s,s2;
 long long int q,n;
 string n1;
 getline(cin,n1);
 n=stoll(n1);
 char guess='1';
 map<char,long long int>vis;
 map<char,bool>vis2;
 long long int res=0;
 for(long long int i(0);i<26;i++){
  vis[i+97]=-1;}
 for(long long int i(0);i<n;i++){
  string s;
  getline(cin,s);
  if(s[0]=='!'){
   map<char,bool>vis1;
   char var21='1';
   if(guess!='1')res++;
   for(long long int j(2);j<s.length();j++){
    if(vis1[s[j]]==0){vis[s[j]]++;vis1[s[j]]=1;}}
   long long int ans1=-10;
   long long int som2=0;
   for(long long int i(0);i<26;i++){
    char var=i+97;
    ans1=max(ans1,vis[var]);}
   for(long long int i(0);i<26;i++){
    char var2=i+97;
    if(vis[var2]==ans1){var21=var2;som2++;}}
   if(som2==1){
    guess=var21;}
   }
  else if((s[0]=='?')and(i!=(n-1))){
   if((guess!='1')){res++;}
   vis[s[2]]=-2;
   char var21='1';
   long long int ans2=-10;
   long long int som3=0;
   for(long long int i(0);i<26;i++){
    char var23=i+97;
    ans2=max(ans2,vis[var23]);}
   for(long long int i(0);i<26;i++){
    char var23=i+97;
    if(vis[var23]==ans2){var21=var23;som3++;}}
   if(som3==1){
    guess=var21;}}
  else{
   char var21='1';
   for(long long int j(2);j<s.length();j++){
    vis[s[j]]=-2;
    }
   long long int ans2=-10;
   long long int som3=0;
   for(long long int i(0);i<26;i++){
    char var23=i+97;
    ans2=max(ans2,vis[var23]);}
   for(long long int i(0);i<26;i++){
    char var23=i+97;
    if(vis[var23]==ans2){var21=var23;som3++;}}
   if(som3==1){
    guess=var21;}
   }
  }
 cout<<res<<endl;
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
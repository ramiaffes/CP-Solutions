#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
long long int power(long long int k,long long int n){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
 
 
 
int main()
{
 fast; 
 long long int n,k,x;
 string s;
 cin>>k;
 cin>>s;
 map<char,bool>vis;
 for(long long int i(0);i<s.length();i++){
  vis[s[i]]=1;}
 long long int i=0;
 long long int j=s.length()-1;
 bool test=true;
 vector<char>res;
 for(long long int d(0);d<k;d++){
  char val1=d+97;
  if(vis[val1]==0){res.push_back(val1);}}
 
 
 while(i<j){
  if((s[i]=='?')and(s[j]=='?')){
   som++;
   i++;
   j--;}
  else if(s[i]=='?'){
   if((s[j]-'a')<k){
    s[i]=s[j];
    i++;
    j--;}
   else{test=false;break;}}
   else if(s[j]=='?'){
   if((s[i]-'a')<k){
    s[j]=s[i];
    i++;
    j--;}
   else{test=false;break;}}
  else if(s[i]==s[j]){
   if((s[i]-'a')<k){
    j--;i++;}
   else{test=false;break;}}
  else{
   test=false;break;}}
  if(i==j){
  if(s[i]=='?'){
   som++;}}
 i=0;
 j=s.length()-1;
 long long int val=0;
 long long int som1=0;
 long long int val22=res.size();
 if(vis['a']==0){val22--;val++;}
 while(i<j){
  if((s[i]=='?')and(s[j]=='?')){
   if(som1<(som-val22)){s[i]='a';s[j]='a';}
   else{s[i]=res[val];s[j]=res[val];val++;}
   i++;som1++;
   j--;}
  else if(s[i]=='?'){
   if((s[j]-'a')<k){
    s[i]=s[j];
    i++;
    j--;}
   else{test=false;break;}}
   else if(s[j]=='?'){
   if((s[i]-'a')<k){
    s[j]=s[i];
    i++;
    j--;}
   else{test=false;break;}}
  else if(s[i]==s[j]){
   if((s[i]-'a')<k){
    j--;i++;}
   else{test=false;break;}}
  else{
   test=false;break;}}
  if(i==j){
  if(s[i]=='?'){
   if(som1<(som-val22))s[i]='a';
   else {s[i]=res[val];val++;}som1++;
   }}
  for(long long int i(0);i<s.length();i++){
   vis[s[i]]=1;}
  bool test1=true;
  for(long long int i(0);i<k;i++){
   char var=i+97;
   if(vis[var]==0){test1=false;break;}}
  if((test==true)and(test1==true))cout<<s<<endl;
  else cout<<"IMPOSSIBLE"<<endl;
 
 
 
 
 
 
 
 
return 0;}
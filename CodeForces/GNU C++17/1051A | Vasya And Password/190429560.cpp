#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
int main()
{
 fast;
 long long int k,t;
 string s;
 string s2;
 cin>>t;
 while(t--){
 
  cin>>s; long long int n=s.length();
  bool test1=false;
  bool test2=false;
  bool test3=false;
  long long int som1=0;
  long long int som2=0;
  long long int som3=0;
  for(long long int i(0);i<n;i++){
   if(isdigit(s[i])){
    test1=true;
    som1++;}
  else if(isalpha(s[i])){
   if(islower(s[i])){
   test2=true;som2++;}
   else {som3++;test3=true;}}}
 if(((test2==false)and(test3==false))or((test1==false)and(test3==false))or((test2==false)and(test1==false))){
  if(isdigit(s[0])){
   s[0]='a';
   s[1]='A';}
  else if(islower(s[0])){
   s[0]='A';
   s[1]='1';}
  else{
   s[0]='a';
   s[1]='1';}
  }
 else if(test1==false){
  if(som2>=som3){
   for(long long int i(0);i<n;i++){
    if(islower(s[i])){
     s[i]='1';break;}}}
  else{
   for(long long int i(0);i<n;i++){
    if(isupper(s[i])){
     s[i]='1';break;}}
   }
 }
else if(test2==false){
 if(som3>=som1){
   for(long long int i(0);i<n;i++){
    if(isupper(s[i])){
     s[i]='a';break;}}}
  else{
   for(long long int i(0);i<n;i++){
    if(isdigit(s[i])){
     s[i]='a';break;}}
   }}
else if(test3==false){
 if(som2>=som1){
   for(long long int i(0);i<n;i++){
    if(islower(s[i])){
     s[i]='A';break;}}}
  else{
   for(long long int i(0);i<n;i++){
    if(isdigit(s[i])){
     s[i]='A';break;}}
   }}
cout<<s<<endl;
 
  
 
}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
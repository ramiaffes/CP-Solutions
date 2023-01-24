#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
vector<pair<long long int ,long long int >>res;
long long int som1=0;
long long int som2=0;
string s;
bool test=true;
void change(long long int i,long long int j,long long int a,long long int b){
 if((som1>a)or(som2>b)){test=false;return;}
 if(test==false)return;
 if(i==j){
  return;}
 else  if(j==(i+1)){
  if((s[i]!=s[j])and(isdigit(s[i]))and(isdigit(s[j]))){
   test=false;return;}
  if((s[i]=='?')and(s[j]=='?')){
   if(som1<(a-1)){
    s[i]='0';
    s[j]='0';
    som1+=2;}
   else if(som2<(b-1)){
    s[i]='1';
    s[j]='1';
    som2+=2;}
   else{s[i]='1';
    s[j]='1';
    som2+=2;}}
   return;}
 else{
  if((s[i]!=s[j])and(isdigit(s[i]))and(isdigit(s[j]))){
   test=false;return;}
  if((s[i]=='?')and(s[j]=='?')){
   if((som1<(a-1))){
    s[i]='0';
    s[j]='0';
    som1+=2;}
   else if(som2<(b-1)){
    s[i]='1';
    s[j]='1';
    som2+=2;}
   else{s[i]='1';
    s[j]='1';
    som2+=2;}}
  change(i+1,j-1,a,b);}
 }
int main()
{
 fast;
 long long int k,t,a,b;
 cin>>t;
 while(t--){
  som1=0;
  som2=0;
  cin>>a>>b;
  cin>>s;
  test=true;
  long long int n=s.length();
  for(long long int i(0);i<(n/2);i++){
   if(s[i]=='?'){
    s[i]=s[n-i-1];
    }
  else if(s[n-i-1]=='?'){
    s[n-i-1]=s[i];
   }}
  for(long long int i(0);i<s.length();i++){
   if(s[i]=='0')som1++;
   else if(s[i]=='1')som2++;}
 if(s.length()%2==1){
  if(s[(a+b)/2]=='?'){
  if(a%2!=som1%2){s[(a+b)/2]='0';som1++;}
  else{s[(a+b)/2]='1';som2++;}}}
  change(0,(a+b-1),a,b);
  if(((som1==a)and(som2==b))and(test==true)){
   cout<<s<<endl;}
 else{
  cout<<-1<<endl;}
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
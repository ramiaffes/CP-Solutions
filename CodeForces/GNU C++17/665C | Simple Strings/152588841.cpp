#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int t,b;
 string s;
    cin>>s;
    long long int n=s.length();
    for(long long int i(1);i<(n);i++){
  if(s[i]==s[i-1]){
   char val=(s[i-1]-97+1)%26+97;
   s[i]=val;
  if(i<(n-1)){
  if(s[i]==s[i+1]){
   char val1=((s[i]-97+1)%26+97);
   s[i]=val1;}}}}
 cout<<s<<endl;
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
char func(char c){
 if (c=='a'){
  return 'b';}
 else{
  return 'a';}}
int main()
{
 fast;
 long long int n;
 cin>>n;
 string ch;
 cin>>ch;
 char c;
 int som(0);
 if(n%2==0){
 for(int i(1);i<n;i+=2){
  c=ch[i-1];
  if (ch[i]==c){
   ch[i]=func(c);
   som+=1;}}}
 else{
  for(int i(1);i<n-1;i+=2){
  c=ch[i-1];
  if (ch[i]==c){
   ch[i]=func(c);
   som+=1;}}
  }
 cout<<som<<endl;
 cout<<ch;
 
 
  
 
        
 return 0;
}
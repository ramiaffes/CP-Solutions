#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
bool fair(long long int x){
 long long int n=x;
 while(n!=0){
  long long int cr=n%10;
  if((cr!=0)and(x%cr!=0)){
   return false;}
  n/=10;}
 return true;
 }
 
 
int main()
{
 fast; 
 long long int t,a,b,c;
 cin>>t;
 string s;
 while(t--){
  cin>>a>>b;
  cin>>s;
  long long int som=0;
  if(s.find('1')==string::npos){
   cout<<som<<endl;
   }
  else if(s=="1"){
   cout<<a<<endl;}
  else{
   som+=a;
   long long int m=s.rfind('1');
   long long int i=s.find('1')+1;
   while(i<m){
    long long int d=0;
    while((s[i]!='1')and(i<m)){
     d++;
     i++;}
    if(d==0){
     som=som;}
    else if(d<=a/b){
     som+=d*b;}
    else{
     som+=a;}
    
    
    i++;
    
    }
    cout<<som<<endl;}
  
  
  }
  
  
  
  
  
  
 
  
 
 
 
 return 0;
}
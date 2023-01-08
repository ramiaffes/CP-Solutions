#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0;
int main()
{
 fast; 
 string s;
 long long int n,m,k,x,y;
    cin>>n;
    cin>>s;
    bool test=true;
    if(s.length()==1){
  if(s[0]=='?')
  cout<<"YES"<<endl;
  else cout<<"NO"<<endl;}
 else{
    for(long long int i(0);i<(n-1);i++){
  if((s[i]==s[i+1])and(s[i]!='?')){test=false;break;}}
 bool test1=false;
 bool test2=false;
 long long int som=0;
 if(test==true){
  for(long long int i(0);i<(n);i++){
   if(s[i]=='?'){
    long long int j=i;
    som=0;
    while((j<n)and(s[j]=='?')){
     som++;
     j++;}
    if(som>=2){test1=true;break;}}}
  if(test1==false){
   if((s[0]=='?')or(s[n-1]=='?')){test2=true;}
   if(test2==false){
   for(long long int i(0);i<(n-2);i++){
    if((s[i]==s[i+2])and(s[i]!='?')and(s[i+1]=='?')){test2=true;break;}}}}}
 if((test==true)and((test1==true)or(test2==true)))cout<<"YES"<<endl;
 else cout<<"No"<<endl;}
 
 
    
 
 
 
 
    
return 0;} 
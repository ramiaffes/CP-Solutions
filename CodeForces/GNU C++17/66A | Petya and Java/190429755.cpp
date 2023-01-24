#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<char,long long int>hashing1;
bool test=true;
 
 
int main()
{
 fast;
 string n;
 cin>>n;
 if(((n[0]=='-')and(n.length()>20))or((n[0]!='-')and(n.length()>19))){
  cout<<"BigInteger"<<endl;
}
else if((n[0]!='-')and(n.length()==19)){
 long long int val1=stoll(n.substr(0,18));
 long long int val2=(n[18]-'0');
 if(val1>922337203685477580){
  cout<<"BigInteger"<<endl;}
 else if(val1==922337203685477580){
  if(val2>7){
   cout<<"BigInteger"<<endl;}
  else{
   cout<<"long"<<endl;}}
 else{
  cout<<"long"<<endl;
  }
 
 
 
 
 }
else if((n[0]=='-')and(n.length()==20)){
 long long int val1=stoll(n.substr(1,18));
 long long int val2=(n[19]-'0');
 if(val1<922337203685477580){
  cout<<"long"<<endl;}
 else if(val1==922337203685477580){
  if(val2>8){
   cout<<"long"<<endl;}
  else{
   cout<<"BigInteger"<<endl;}}
 else{
  cout<<"BigInteger"<<endl;
  }
 
 }
else{
 long long int val1=stoll(n);
 if((val1>=(-128))and(val1<=127)){
  cout<<"byte"<<endl;}
 else if((val1>=-32768)and(val1<=32767)){
  cout<<"short"<<endl;}
 else if((val1>=-2147483648)and(val1<=2147483647)){
  cout<<"int"<<endl;}
 else{
  cout<<"long"<<endl;}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
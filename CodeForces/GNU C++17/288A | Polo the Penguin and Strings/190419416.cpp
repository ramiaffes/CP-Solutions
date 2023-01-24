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
 long long int n,k;
 string s;
 cin>>n>>k;
 if(n<k){
  cout<<-1<<endl;}
 else if(k==1){
  if(n==1)
  cout<<"a"<<endl;
 else cout<<-1<<endl;}
 else{
 long long int i=0;
 int test=0;
 while(i<(n-k+2)){
  if(test==0)s.append("a");
  else s.append("b");
  test=1-test;
  i++;}
 for(long long int d(2);d<k;d++){
  char var =d+97;
  string var1(1,var);
  s.append(var1);}
 cout<<s<<endl;}
 
 
 
 
 
 
 
return 0;}
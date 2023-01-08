#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
vector<char>res;
long long int N=1000;
int main()
{
 fast;
 long long int n,m;
 string s;
 cin>>n;
 cin>>s;
 vector<long long int>vect(9);
 for(long long int i(0);i<9;i++)cin>>vect[i];
 long long int val2=-1;
 for(long long int i(0);i<n;i++){
  long long int val=s[i]-'0';
  if(vect[val-1]>val){
   val2=i;break;}}
if(val2!=-1){
 for(long long int i(val2);i<n;i++){
  long long int val=s[i]-'0';
  if(vect[val-1]<val){
   break;}
  char val10=vect[val-1]+'0';
  s[i]=val10;
  }}
cout<<s<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
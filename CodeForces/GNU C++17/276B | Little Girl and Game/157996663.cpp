#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
bool test=false;
 
int main()
{
 fast; 
 string s;
 cin>>s;
 map<char,long long int>hashing;
 for(long long int i(0);i<s.length();i++){
  hashing[s[i]]++;}
 bool test=true;
 int test1=0;
 while(1){
 long long int som=0;
 for(auto v:hashing){
  if(hashing[v.first]%2==1)som++;
  if(som>=2)break;
  }
 if(som<=1){
  break;}
 bool test2=false;
 for(auto v:hashing){
  if((hashing[v.first]%2==0)and(hashing[v.first]!=0)){
   test2=true;
   hashing[v.first]--;break;}
  }
 if(test2==false){
 for(auto v:hashing){
  if(hashing[v.first]%2==1){
   hashing[v.first]--;break;}
  }}
 test1=1-test1;
 
 
 
}
if(test1==0){
 cout<<"First"<<endl;}
else{
 cout<<"Second"<<endl;}
 
    
    
 
    
    
 
    
    
return 0;}
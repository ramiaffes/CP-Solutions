#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,set<long long int>>adj;
 
vector<pair<long long int,long long int>>vect(N);
long long int som1=2*1e9;
long long int som2=0;
long long int val3=0;
bool isprime(long long int num){
    bool flag=true;
    for(long long int i = 2; i*i<= num ; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;}
int main()
{
 fast; 
 long long int n,x,m,t,l,k,r;
 string a;
 cin>>n;
 cin>>a;
 vector<long long int>res;
 for(long long int i(0);i<n;i++){
  if((a[i]=='0')or(a[i]=='1'))continue;
  else if(a[i]=='8'){
   res.push_back(2);
   res.push_back(2);
   res.push_back(2);
   res.push_back(7);
   }
  else if(a[i]=='4'){
   res.push_back(2);
   res.push_back(2);
   res.push_back(3);}
  else if(a[i]=='6'){
   res.push_back(3);
   res.push_back(5);}
  else if(a[i]=='9'){
    res.push_back(3);
   res.push_back(3);
   res.push_back(2);
   res.push_back(7);}
  else res.push_back((a[i]-'0'));}
 sort(res.begin(),res.end());
 reverse(res.begin(),res.end());
 for(auto v:res)cout<<v;
 
 
 
 
return 0;}
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
 string s;
 cin>>n;
 long long int val=n/3;
 long long int res1=0;
 long long int res2=0;
 if(n%3==2){
  res2++;}
 res1=val/12;
 res2+=val%12;
 if(res2==12){
  res1++;
  res2=0;}
 cout<<res1<<" "<<res2<<endl;
 
 
 
 
return 0;}
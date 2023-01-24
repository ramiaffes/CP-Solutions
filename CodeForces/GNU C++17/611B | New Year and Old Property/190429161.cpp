#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 long long power(long long x,long long y)
{
    long long ans=1;
    while (y){
        if (y&1) ans=ans*x;
        x=x*x;
        y=y>>1;
    }
    return ans;
}
int main()
{
 fast;
 long long int a,b;
 cin>>a>>b;
 vector<long long int>res;
 vector<long long int>res1;
 long long int b1=b;
 long long int a1=a;
 while(b1!=0){
  res.push_back(b1%2);
  b1/=2;}
reverse(res.begin(),res.end());
long long int som=0;
while(a1!=0){
 res1.push_back(a1%2);
 a1/=2;}
reverse(res1.begin(),res1.end());
if(res1.size()==res.size()){
 long long int val=power(2,res1.size())-1;
 for(long long int i(0);i<(res1.size()-1);i++){
  long long int val2=val-power(2,i);
  if((val2>=a)and(val2<=b)){som++;}}}
else{
  long long int val=power(2,res1.size())-1;
 for(long long int i(0);i<(res1.size()-1);i++){
  long long int val2=val-power(2,i);
  if((val2>=a))som++;}
 long long int val23=power(2,res.size())-1;
 for(long long int i(0);i<(res.size()-1);i++){
  long long int val2=val23-power(2,i);
  if((val2<=b))som++;}
 }
for(long long int i(res1.size()+1);i<res.size();i++){
 som+=(i-1);}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
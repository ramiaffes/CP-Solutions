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
 string n;
 cin>>n;
 if(n.length()==1){
  cout<<n<<endl;}
 else{
 long long int val=stoll(n);
 long long int tot=1<<n.length();
 long long int som=0;
 for(long long int mask=0;mask<tot;mask++){
  for(long long int d(0);d<9;d++){
   for(long long int j(d+1);j<=9;j++){
  string s(n.length(),'0');
  bool test=false;
  bool test1=false;
  for(long long int i=0;i<n.length();i++){
   long long int f=1<<i;
   if(mask&f){
    s[i]=j+'0';
    test=true;
    }
   else{
    test1=true;
    s[i]=d+'0';}}
  if(s[0]=='0')continue;
  if((test==false)or(test1==false))continue;
  long long int val2=stoll(s);
  if(val2<=val){som++;}}}}
 string s1(n.length(),n[0]);
 long long int val3=stoll(s1);
 if(val3<=val)som++;
 som+=(n[0]-1-'0');
if(n.length()>=1){
for(long long int d(1);d<9;d++){
for(long long int j(d+1);j<=9;j++){
 som+=(power(2,n.length())-2*(n.length()-1)-2);}}
som+=9*(n.length()-1);}
if(n.length()>=2){
for(long long int d(1);d<=9;d++){
 som+=(power(2,n.length()-1)-2-(n.length()-2));}
 }
cout<<som<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>dp;
long long int som=0;
int main() 
{
 fast;
 string s;
 string t;
 cin>>s;
 cin>>t;
 long long int val=0;
 long long int som1=0;
 long long int som2=0;
 for(long long int d(0);d<t.length();d++){
   if(t[d]==s[val]){
    val++;}
   som1++;
   if(val==s.length())break;}
 long long int val1=s.length()-1;
for(long long int d(t.length()-1);d>=0;d--){
   if(t[d]==s[val1]){
    val1--;}
   som2++;
   if(val1==-1)break;}
if((val1==-1)and(val==s.length()))
cout<<max(val1+1,(t.length()-som2-som1+1))<<endl;
else cout<<0<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
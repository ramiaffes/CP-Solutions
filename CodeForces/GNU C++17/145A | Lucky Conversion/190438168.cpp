 
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
 
int main()
{
 fast;
string a,b;
cin>>a>>b;
long long int som1=0;
long long int som2=0;
for(long long int i(0);i<a.length();i++){
 if(a[i]!=b[i]){
  if(a[i]=='7'){
   som1++;}
  else{som2++;}}}
cout<<(min(som1,som2)+abs(som1-som2))<<endl;
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
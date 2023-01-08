#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int k;
 string a;
 cin>>a;
 cin>>k;
 long long int var=a.length();
 long long int val=k;
 long long int val2=0;
 for(long long int i(0);i<(a.length());i++){
  long long int ans=0;
  for(long long int j(i);j<=min((i+val),var-1);j++){
   long long int dr=a[j]-'0';
   ans=max(ans,dr);}
  for(long long int j(i);j<=min((i+val),var-1);j++){
  if(ans==(a[j]-'0')){
   val2=j;val-=j-i;break;}
   
  }
 
 for(long long int j(val2);j>=(i+1);j--){
  swap(a[j],a[j-1]);}
 if(val==0)break;
 
 
  
  }
cout<<a<<endl;
 
 
 
return 0;}  
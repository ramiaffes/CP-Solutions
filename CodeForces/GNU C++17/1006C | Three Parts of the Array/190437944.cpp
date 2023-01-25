#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,long long int>hashing;
int main()
{
 fast;
 long long int n,l,r,x,y,k;
 cin>>n;
 vector<long long int>vect(n);
 long long int ans=0;
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int j=n-1;
 long long int i=0;
 long long int som1=0;
 long long int som3=0;
 bool test1=true;
 bool test2=true;
 while(i<j){
  if(test1==true){
  som1+=vect[i];}
  if(test2==true){
  som3+=vect[j];}
  if(som1==som3){
   ans=som1;
   j--;
   i++;
   test1=true;
   test2=true;
   }
  else{
   if(som1<som3){test1=true;test2=false;i++;}
   else{test2=true;test1=false;j--;}}
  }
 cout<<ans<<endl;
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int n,k;
 string s;
 cin>>n;
 vector<long long int >vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int ans=0;
 for(long long int i(0);i<n;i++){
  long long int val=1;
  long long int som1=vect[i];
  for(long long int j(i);j<n;j++){
   if((som1)>100*val){
    ans=max(ans,j-i+1);
    }
   val++;
   if(j<(n-1)){
   som1+=vect[j+1];}
   }}
 cout<<ans<<endl;
 
return 0;}
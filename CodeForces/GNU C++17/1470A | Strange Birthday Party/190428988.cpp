#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
vector<char>res;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int n,m,t;
 cin>>t;
 while(t--){
 cin>>n>>m;
 vector<long long int>vect(n);
 vector<long long int>vect1(m);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int j(0);j<m;j++)cin>>vect1[j];
 sort(vect.begin(),vect.end());
 long long int i=0;
 long long int j=n-1;
 long long int som=0;
 while((j>=0)and(i<m)){
  if((vect[j]-1)>=i){
   som+=vect1[i];
   i++;
   j--;}
 else{
  break;}} 
for(long long int d(j);d>=0;d--){
 som+=vect1[vect[d]-1];}
cout<<som<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
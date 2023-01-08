#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main()
{
 fast;
long long int n,t,k;
cin>>t;
while(t--){
cin>>n>>k;
vector<long long int>vect(n);
vector<long long int>vect1(k);
for(long long int i(0);i<n;i++){cin>>vect[i];}
for(long long int i(0);i<k;i++){
 cin>>vect1[i];}
sort(vect.begin(),vect.end());
sort(vect1.begin(),vect1.end());
auto it=upper_bound(vect1.begin(),vect1.end(),1);
reverse(it,vect1.end());
long long int j=n-1;
long long int i=0;
long long int val=0;
long long int som=0;
long long int som1=0;
while(i<j){
 if(som==vect1[val]){
  val++;
  som=0;}
 if(som==0){
  som1+=vect[j];j--;som++;
  if(som>=vect1[val]){som1+=vect[j+1];if(i==j)som=0;continue;}
  som1+=vect[i];som++;
  i++;}
 else{
  i++;
  som++;}
 
  
 }
if(i==j){
if(som==0){som1+=2*vect[j];}}
 
cout<<som1<<endl;
 
}
 
 
   return 0;}
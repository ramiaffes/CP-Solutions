#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
map<long long int, bool>vis;
map<long long int,vector<long long int>>adj;
 
int main()
{
fast;
long long int n,k;
cin>>n>>k;
vector<long long int>vect(n);
long long int som=0;
long long int som1=0;
for(long long int i(0);i<n;i++){cin>>vect[i];}
long long int i=0;
while((i<n)and(som<k)and(vect[i]<=0)){
 vect[i]=-vect[i];
 i++;
 som++;
 }
sort(vect.begin(),vect.end());
while(som<k){
 vect[0]=-vect[0];
 som++;
 }
for(long long int i(0);i<n;i++){
 som1+=vect[i];} 
cout<<som1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}